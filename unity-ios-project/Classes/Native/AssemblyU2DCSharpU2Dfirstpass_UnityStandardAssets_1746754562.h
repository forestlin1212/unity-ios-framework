#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_t3347016329;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
struct  CrossPlatformInputManager_t1746754562  : public Il2CppObject
{
public:

public:
};

struct CrossPlatformInputManager_t1746754562_StaticFields
{
public:
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::activeInput
	VirtualInput_t3347016329 * ___activeInput_0;
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::s_TouchInput
	VirtualInput_t3347016329 * ___s_TouchInput_1;
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::s_HardwareInput
	VirtualInput_t3347016329 * ___s_HardwareInput_2;

public:
	inline static int32_t get_offset_of_activeInput_0() { return static_cast<int32_t>(offsetof(CrossPlatformInputManager_t1746754562_StaticFields, ___activeInput_0)); }
	inline VirtualInput_t3347016329 * get_activeInput_0() const { return ___activeInput_0; }
	inline VirtualInput_t3347016329 ** get_address_of_activeInput_0() { return &___activeInput_0; }
	inline void set_activeInput_0(VirtualInput_t3347016329 * value)
	{
		___activeInput_0 = value;
		Il2CppCodeGenWriteBarrier(&___activeInput_0, value);
	}

	inline static int32_t get_offset_of_s_TouchInput_1() { return static_cast<int32_t>(offsetof(CrossPlatformInputManager_t1746754562_StaticFields, ___s_TouchInput_1)); }
	inline VirtualInput_t3347016329 * get_s_TouchInput_1() const { return ___s_TouchInput_1; }
	inline VirtualInput_t3347016329 ** get_address_of_s_TouchInput_1() { return &___s_TouchInput_1; }
	inline void set_s_TouchInput_1(VirtualInput_t3347016329 * value)
	{
		___s_TouchInput_1 = value;
		Il2CppCodeGenWriteBarrier(&___s_TouchInput_1, value);
	}

	inline static int32_t get_offset_of_s_HardwareInput_2() { return static_cast<int32_t>(offsetof(CrossPlatformInputManager_t1746754562_StaticFields, ___s_HardwareInput_2)); }
	inline VirtualInput_t3347016329 * get_s_HardwareInput_2() const { return ___s_HardwareInput_2; }
	inline VirtualInput_t3347016329 ** get_address_of_s_HardwareInput_2() { return &___s_HardwareInput_2; }
	inline void set_s_HardwareInput_2(VirtualInput_t3347016329 * value)
	{
		___s_HardwareInput_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_HardwareInput_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
