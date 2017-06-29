# 配置记录

创建 target，Cocoa touch Framework类型。工程名字为 UnityOutFramework

### 以下设置，为了让 target 可以build 成功。

1. `Classes` 和 `Libraries`下的所有代码文件，除了 `main.mm`，`RegisterMonoModules.h`，`RegisterMonoModules.cpp`，其它都打上 target。
2. Build Settings -> Header Search Paths: `$(inherited) "$(SRCROOT)/Classes" "$(SRCROOT)" $(SRCROOT)/Classes/Native $(SRCROOT)/Libraries/bdwgc/include $(SRCROOT)/Libraries/libil2cpp/include`
3. Build Settings -> Library Search Paths: `$(inherited) "$(SRCROOT)" "$(SRCROOT)/Libraries"`
4. Build Settings -> Prefix Header: `Classes/Prefix.pch`
5. Build Settings -> Mismatched Return Type: `Yes`
6. Build Settings -> Enable C++ Exceptions: `Yes`
7. Build Settings -> Other Linker Flags: `$(inherited) -weak_framework CoreMotion -weak-lSystem`
8. Build Settings -> Mach-O Type: `Static Library`


### 以下设置，为了 framework 支持多个 cpu 架构

1. Build Settings -> Achitectures: `Standard achitectures`，这样可以支持多个 cpu 架构。
2. Build Settings -> Build Avtive Achitecture Only: `No`

### 以下设置，为了 framework 可以被测试工程正常的使用

**1. 设置公开的头文件。**

把需要公开的头文件设置为 public。可以在 Build Phases->Headers中设置；也可以选中文件，然后在File Inspector->Target Membership中更改。

在UnityOutFramework.h中 import 所有公开的头文件。注意不要 UI Unity之类的路径。

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

**2. 为 framework 添加扁平路径的公开头文件。我们复制一份需要更改的头文件，然后把修改的头文件覆盖到原始的头文件。**

因为这些复制的头文件不能加入工程，否则会重定义。所以在 finder，项目的UnityOutFramework下新加一个目录：FlatPathHeaders。

![flat-path-headers](https://github.com/forestlin1212/unity-ios-framework/blob/master/help-images/flat-headers.png?raw=true)

把公开的头文件中所有带有路径的头文件引用，改成没有路径。例如UnityView.h中：把

```c++
#include "Unity/GlesHelper.h"
```

改为：

```c++
#include "GlesHelper.h"
```



**Build Phases->创建 Run Script**

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

**3. 修改UnityAppController.mm中一段代码：**

`didFinishLaunchingWithOptions`方法中，更改 Unity 启动的 bundle path。

```objective-c
UnityInitApplicationNoGraphics([[[NSBundle mainBundle] bundlePath] UTF8String]);
```

改为：

```objective-c
NSBundle * bundle = [NSBundle bundleForClass:[self class]];
UnityInitApplicationNoGraphics([[bundle bundlePath] UTF8String]);
```



**以上，build target，顺利生成一个Unity framework。**

**以下，新建一个 iOS 工程，使用 Unity framework。**



**4. 在测试工程中，添加framework。**

首先添加 Unity framework，然后添加需要使用的7个系统 framework。

![system-frameworks](https://github.com/forestlin1212/unity-ios-framework/blob/master/help-images/system-framework.png?raw=true)



**5. 把 unity-iphone 工程中的 Data 目录，拷贝到测试工程中。引用方式加入工程。**



**6.测试工程的其它设置**

Build Settings -> Other Linker Flags: 添加 `-force_load UnityOutFramework.framework/UnityOutFramework`

由于添加了这个 flag，如果 Unity framework 中有`RegisterMonoModules.h`，`RegisterMonoModules.cpp`，会出现链接错误：`4 duplicate symbols: RegisterAllStrippedInternalCalls……`。所以在一开始的 framework 工程中要去除这2个文件。

**这个设置非常的重要。否则framework运行时会崩溃在**`il2cpp::vm::MetadataCache::Initialize()`

**目前Google到的几乎所有人都失败在这里**，比如：

[Build Unity app as framework | Unity Community](https://forum.unity3d.com/threads/build-unity-app-as-framework-then-consumed-by-another-app.430068/)

[IL2CPP: crashes | Unity Commnity](https://forum.unity3d.com/threads/il2cpp-anyone-else-seeing-metadatacache-initialize-crashes-sometimes-when-the-game-starts.383145/#post-2657443)

[How can I build the ios unity project as ios framework project? | Stack Overflow](http://stackoverflow.com/questions/34436341/how-can-i-build-the-ios-unity-project-as-ios-framework-project)

原因可能是：`MetadataCache::Initialize()`没有被链接器加载，需要告诉链接器强制加载UnityOutFramework的所有内容。

虽然不清楚细节原理，但是问题解决了，管用就行。祝你们好运！