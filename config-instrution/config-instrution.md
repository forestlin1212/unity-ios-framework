# Config instruction

Create a new target, Cocoa touch Framework type, named **UnityOutFramework**

##  Do these settings below, for building target successfully.

1. Target all code files in `Classes` and `Libraries`, except `main.mm`,`RegisterMonoModules.h`,`RegisterMonoModules.cpp`.
2. Build Settings -> Header Search Paths: `$(inherited) "$(SRCROOT)/Classes" "$(SRCROOT)" $(SRCROOT)/Classes/Native $(SRCROOT)/Libraries/bdwgc/include $(SRCROOT)/Libraries/libil2cpp/include`
3. Build Settings -> Library Search Paths: `$(inherited) "$(SRCROOT)" "$(SRCROOT)/Libraries"`
4. Build Settings -> Prefix Header: `Classes/Prefix.pch`
5. Build Settings -> Mismatched Return Type: `Yes`
6. Build Settings -> Enable C++ Exceptions: `Yes`
7. Build Settings -> Other Linker Flags: `$(inherited) -weak_framework CoreMotion -weak-lSystem`
8. Build Settings -> Mach-O Type: `Static Library`


## Do these settings below, for supporting multi achitectures.

1. Build Settings -> Achitectures: `Standard achitectures`
2. Build Settings -> Build Avtive Achitecture Only: `No`

## Do these configs below,  for running framework in test project successfully.

#### 1. Config public Header files.

Set these important headers to public. You can do it in Build Phases->Headers,  Or select the files, then change File Inspector->Target Membership. 

In UnityOutFramework.h,  import all the public headers. Don't contain  "UI/", "Unity/"  relative path. 

```objective-c
// In this header, you should import all the public headers of your framework using statements like #import <UnityOutFramework/PublicHeader.h>
#import <UnityOutFramework/Preprocessor.h>

#import <UnityOutFramework/UnityInterface.h>
#import <UnityOutFramework/UnityForwardDecls.h>
#import <UnityOutFramework/UnityRendering.h>

#import <UnityOutFramework/UnityAppController.h>
#import <UnityOutFramework/RenderPluginDelegate.h>
#import <UnityOutFramework/LifeCycleListener.h>

#import <UnityOutFramework/UnityView.h>
#import <UnityOutFramework/GlesHelper.h>
#import <UnityOutFramework/iPhone_Sensors.h>

#import <UnityOutFramework/UnityViewControllerBase.h>
#import <UnityOutFramework/UnityViewControllerBaseiOS.h>
```

#### 2. Create flat path headers for framework. 

Create a folder named "FlatPathHeaders" in UnityOutFramework folder of project. 

![flat-path-headers](https://github.com/Octten/image-store/blob/master/unity-framework-md/flat-headers.png?raw=true)

Delete the relative path in public header files. eg: UnityView.h：change

```c++
#include "Unity/GlesHelper.h"
```

to:

```c++
#include "GlesHelper.h"
```



**Build Phases->create Run Script**. This make sure the framework will use the flat-path headers.

```sh
inputDirectory=$PROJECT_DIR/${TARGET_NAME}/FlatPathHeaders
outputDirectory=${BUILD_DIR}/${CONFIGURATION}-iphoneos/${TARGET_NAME}.framework/Headers

echo "in $inputDirectory"
echo "out $outputDirectory"

if [ ! -d "$outputDirectory" ]; then
echo "no out path,and create: $outputDirectory"
mkdir $outputDirectory
fi

cp -R $inputDirectory/. $outputDirectory/
```

#### 3. Change Unity bundle path in UnityAppController.mm：

in`didFinishLaunchingWithOptions` change:

```objective-c
UnityInitApplicationNoGraphics([[[NSBundle mainBundle] bundlePath] UTF8String]);
```

to:

```objective-c
NSBundle * bundle = [NSBundle bundleForClass:[self class]];
UnityInitApplicationNoGraphics([[bundle bundlePath] UTF8String]);
```



**After these settings above, build the target UnityOutFramework, then Xcode will generate the Unity framework. **

**Now,  we create a new iOS project, and test Unity framework. **



#### 4. Add frameworks to test projcet.

First, add Unity framework.  Then, add 7 System frameworks we need. 

![system-frameworks](https://github.com/Octten/image-store/blob/master/unity-framework-md/system-framework.png?raw=true)



#### 5. Copy Unity "data" folder to test project.  Make sure add by fold reference. 

![system-frameworks](https://github.com/Octten/image-store/blob/master/unity-framework-md/data-folder.png?raw=true)

#### 6.Other setting in test project.

Build Settings -> Other Linker Flags: add flag `-force_load UnityOutFramework.framework/UnityOutFramework`

**This flag is very important. Without it, the project will crash at: **`il2cpp::vm::MetadataCache::Initialize()`

**Almost everybody on Internet is failed in here **,eg: 

[Build Unity app as framework | Unity Community](https://forum.unity3d.com/threads/build-unity-app-as-framework-then-consumed-by-another-app.430068/)

[IL2CPP: crashes | Unity Commnity](https://forum.unity3d.com/threads/il2cpp-anyone-else-seeing-metadatacache-initialize-crashes-sometimes-when-the-game-starts.383145/#post-2657443)

[How can I build the ios unity project as ios framework project? | Stack Overflow](http://stackoverflow.com/questions/34436341/how-can-i-build-the-ios-unity-project-as-ios-framework-project)

I guess the reason is：the Linker did't load `MetadataCache::Initialize()` at all. So we need to tell Linker force load all symbols in UnityOutFramework. 

Because of this flag, if Unity framework contains `RegisterMonoModules.h`,`RegisterMonoModules.cpp`, there will be an link error: `4 duplicate symbols: RegisterAllStrippedInternalCalls……`. That's why I exclude this 2 files in UnityOutFramework target at beginning. 



**Build and run your test project, it will be perfect. Good Luck！**
