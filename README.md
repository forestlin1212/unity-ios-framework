# Unity-iOS project to Framework

This is a solution for building Unity-iOS project to Cocoa Touch Framework. 

![icon](https://github.com/Octten/image-store/blob/master/unity-framework-md/icon.png?raw=true)

## What's this used for?

When you developed some 3D features by Unity, and you wanna provide these features for other iOS Native Apps. There is no perfect way to do this before!  With this solution, you can build your Unity-iOS project to a Cocoa Touch Framework, then other native project could use the framework. **It's very useful when making VR/AR/MR SDK**.

## Usage

1. Export your Unity project to Unity-iOS project. Make sure your iOS Player Settings —> Target SDK is : `Device SDK`. Because this solution only support running on iOS device, don't support simulator.

2. Build Unity-iOS to Cocoa Touch Framework, then add it to your testing Xcode project.

   **Follow this instruction:**  [config-instrution](https://github.com/forestlin1212/unity-ios-framework/blob/master/config-instrution/config-instrution.md) / [配置说明](https://github.com/forestlin1212/unity-ios-framework/blob/master/config-instrution/配置说明.md)

   There maybe a little complicate,  but it will be a work. 

## Preview

This is a simple native app using Unity framework.

![preview](https://github.com/Octten/image-store/blob/master/unity-framework-md/preview.gif?raw=true)

## Supported versions

`arm64`, `armv7`, `armv7s` iPhone/iPad device

iOS 8.0 +

Unity 5.5.1+

## To do

Support Swift

Support Dynamic Library

Better encapsulation and simple interface in UnityOut Framework. This will be very difficult.

## Thanks

[Daniel Arantes Loverde](https://bitbucket.org/jack_loverde/) and his Bitbucket repo [Unity, Vuforia and iOS native subclass](https://bitbucket.org/jack_loverde/unity-5-vuforia-6-and-ios-native-integration)  

[Build Unity app as framework | Unity Community](https://forum.unity3d.com/threads/build-unity-app-as-framework-then-consumed-by-another-app.430068/)

[IL2CPP: crashes | Unity Commnity](https://forum.unity3d.com/threads/il2cpp-anyone-else-seeing-metadatacache-initialize-crashes-sometimes-when-the-game-starts.383145/#post-2657443)

[How can I build the ios unity project as ios framework project? | Stack Overflow](http://stackoverflow.com/questions/34436341/how-can-i-build-the-ios-unity-project-as-ios-framework-project)

[@JjieChen](https://github.com/JjieChen)

[@zhoukaijun123](https://github.com/zhoukaijun123)

## Contact

linshusen@gmail.com

linshs@qq.com