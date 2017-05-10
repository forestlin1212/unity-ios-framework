#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
struct AxisTouchButton_t3842535002;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t2691167515;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
struct  AxisTouchButton_t3842535002  : public MonoBehaviour_t1158329972
{
public:
	// System.String UnityStandardAssets.CrossPlatformInput.AxisTouchButton::axisName
	String_t* ___axisName_2;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::axisValue
	float ___axisValue_3;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::responseSpeed
	float ___responseSpeed_4;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::returnToCentreSpeed
	float ___returnToCentreSpeed_5;
	// UnityStandardAssets.CrossPlatformInput.AxisTouchButton UnityStandardAssets.CrossPlatformInput.AxisTouchButton::m_PairedWith
	AxisTouchButton_t3842535002 * ___m_PairedWith_6;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.AxisTouchButton::m_Axis
	VirtualAxis_t2691167515 * ___m_Axis_7;

public:
	inline static int32_t get_offset_of_axisName_2() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3842535002, ___axisName_2)); }
	inline String_t* get_axisName_2() const { return ___axisName_2; }
	inline String_t** get_address_of_axisName_2() { return &___axisName_2; }
	inline void set_axisName_2(String_t* value)
	{
		___axisName_2 = value;
		Il2CppCodeGenWriteBarrier(&___axisName_2, value);
	}

	inline static int32_t get_offset_of_axisValue_3() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3842535002, ___axisValue_3)); }
	inline float get_axisValue_3() const { return ___axisValue_3; }
	inline float* get_address_of_axisValue_3() { return &___axisValue_3; }
	inline void set_axisValue_3(float value)
	{
		___axisValue_3 = value;
	}

	inline static int32_t get_offset_of_responseSpeed_4() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3842535002, ___responseSpeed_4)); }
	inline float get_responseSpeed_4() const { return ___responseSpeed_4; }
	inline float* get_address_of_responseSpeed_4() { return &___responseSpeed_4; }
	inline void set_responseSpeed_4(float value)
	{
		___responseSpeed_4 = value;
	}

	inline static int32_t get_offset_of_returnToCentreSpeed_5() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3842535002, ___returnToCentreSpeed_5)); }
	inline float get_returnToCentreSpeed_5() const { return ___returnToCentreSpeed_5; }
	inline float* get_address_of_returnToCentreSpeed_5() { return &___returnToCentreSpeed_5; }
	inline void set_returnToCentreSpeed_5(float value)
	{
		___returnToCentreSpeed_5 = value;
	}

	inline static int32_t get_offset_of_m_PairedWith_6() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3842535002, ___m_PairedWith_6)); }
	inline AxisTouchButton_t3842535002 * get_m_PairedWith_6() const { return ___m_PairedWith_6; }
	inline AxisTouchButton_t3842535002 ** get_address_of_m_PairedWith_6() { return &___m_PairedWith_6; }
	inline void set_m_PairedWith_6(AxisTouchButton_t3842535002 * value)
	{
		___m_PairedWith_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_PairedWith_6, value);
	}

	inline static int32_t get_offset_of_m_Axis_7() { return static_cast<int32_t>(offsetof(AxisTouchButton_t3842535002, ___m_Axis_7)); }
	inline VirtualAxis_t2691167515 * get_m_Axis_7() const { return ___m_Axis_7; }
	inline VirtualAxis_t2691167515 ** get_address_of_m_Axis_7() { return &___m_Axis_7; }
	inline void set_m_Axis_7(VirtualAxis_t2691167515 * value)
	{
		___m_Axis_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_Axis_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
