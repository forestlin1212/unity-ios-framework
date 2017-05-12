# 配置记录

**创建 target，Cocoa touch Framework类型。**工程名字为 UnityOutFramework

### 以下设置，为了让 target 可以build 成功。

1. `Classes` 和 `Libraries`下的所有代码文件，除了 `main.mm`，其它都打上 target。
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

### 以下设置，为了 framework 可以被其它工程正常的使用

1. **设置公开的头文件。**

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

2. **为 framework 添加扁平路径的公开头文件。我们复制一份需要更改的头文件，然后把修改的头文件覆盖到原始的头文件。**

因为这些复制的头文件不能加入工程，否则会重定义。所以在 finder，项目的UnityOutFramework下新加一个目录：FlatPathHeaders。

Build Phases->创建 Run Script

```sh
inputDirectory=$PROJECT_DIR/UnityOutFramework/FlatPathHeaders
outputDirectory=${BUILD_DIR}/${CONFIGURATION}-iphoneos/${TARGET_NAME}.framework/Headers

echo "in $inputDirectory"
echo "out $outputDirectory"

if [ ! -d "$outputDirectory" ]; then
echo "no out path,and create: $outputDirectory"
mkdir $outputDirectory
fi

cp -R $inputDirectory/. $outputDirectory/
```

3. 修改UnityAppController.mm中一段代码：

`didFinishLaunchingWithOptions`方法中，

```objective-c
UnityInitApplicationNoGraphics([[[NSBundle mainBundle] bundlePath] UTF8String]);
```

改为：

```
NSBundle * bundle = [NSBundle bundleForClass:[self class]];
UnityInitApplicationNoGraphics([[bundle bundlePath] UTF8String]);
```

3. **在测试工程中，添加几个系统 framework。**

7个 framework。



4. **把 unity-iphone 工程中的 Data 目录，整个拷贝到测试工程中。引用方式加入工程。**











Build Phases -> Link Binary With Libraries:  加入 iOS 核心 frameworks。

删除RegisterMonoModules.h和cpp。不影响使用，同时可以解决 framework 被引用时没有链接问题。