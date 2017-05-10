# 配置记录

1. 添加 target
2. `Classes` 和 `Libraries`下的所有代码文件，除了 `main.mm`，其它都打上 target。
3. Build Settings -> Header Search Paths: `$(inherited) "$(SRCROOT)/Classes" "$(SRCROOT)" $(SRCROOT)/Classes/Native $(SRCROOT)/Libraries/bdwgc/include $(SRCROOT)/Libraries/libil2cpp/include`
4. Build Settings -> Library Search Paths: `$(inherited) "$(SRCROOT)" "$(SRCROOT)/Libraries"`
5. Build Settings -> Prefix Header: `Classes/Prefix.pch`
6. Build Settings -> Mismatched Return Type: `Yes`
7. Build Settings -> Enable C++ Exceptions: `Yes`
8. Build Settings -> Other Linker Flags: `$(inherited) -weak_framework CoreMotion -weak-lSystem`
9. Build Settings -> Mach-O Type: `Static Library`
10. Build Settings -> Enable Bitcode: `No`
11. Build Phases -> Link Binary With Libraries:  加入 iOS 核心 frameworks。
12. 删除RegisterMonoModules.h和cpp。不影响使用，同时可以解决 framework 被引用时没有链接问题。




