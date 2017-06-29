#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_3887193949.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_C113868641.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.String
struct String_t;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t2691167515;
// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TouchPad
struct  TouchPad_t1952940174  : public MonoBehaviour_t1158329972
{
public:
	// UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption UnityStandardAssets.CrossPlatformInput.TouchPad::axesToUse
	int32_t ___axesToUse_2;
	// UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle UnityStandardAssets.CrossPlatformInput.TouchPad::controlStyle
	int32_t ___controlStyle_3;
	// System.String UnityStandardAssets.CrossPlatformInput.TouchPad::horizontalAxisName
	String_t* ___horizontalAxisName_4;
	// System.String UnityStandardAssets.CrossPlatformInput.TouchPad::verticalAxisName
	String_t* ___verticalAxisName_5;
	// System.Single UnityStandardAssets.CrossPlatformInput.TouchPad::Xsensitivity
	float ___Xsensitivity_6;
	// System.Single UnityStandardAssets.CrossPlatformInput.TouchPad::Ysensitivity
	float ___Ysensitivity_7;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_StartPos
	Vector3_t2243707580  ___m_StartPos_8;
	// UnityEngine.Vector2 UnityStandardAssets.CrossPlatformInput.TouchPad::m_PreviousDelta
	Vector2_t2243707579  ___m_PreviousDelta_9;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_JoytickOutput
	Vector3_t2243707580  ___m_JoytickOutput_10;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_UseX
	bool ___m_UseX_11;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_UseY
	bool ___m_UseY_12;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TouchPad::m_HorizontalVirtualAxis
	VirtualAxis_t2691167515 * ___m_HorizontalVirtualAxis_13;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TouchPad::m_VerticalVirtualAxis
	VirtualAxis_t2691167515 * ___m_VerticalVirtualAxis_14;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_Dragging
	bool ___m_Dragging_15;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad::m_Id
	int32_t ___m_Id_16;
	// UnityEngine.Vector2 UnityStandardAssets.CrossPlatformInput.TouchPad::m_PreviousTouchPos
	Vector2_t2243707579  ___m_PreviousTouchPos_17;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_Center
	Vector3_t2243707580  ___m_Center_18;
	// UnityEngine.UI.Image UnityStandardAssets.CrossPlatformInput.TouchPad::m_Image
	Image_t2042527209 * ___m_Image_19;

public:
	inline static int32_t get_offset_of_axesToUse_2() { return static_cast<int32_t>(offsetof(TouchPad_t1952940174, ___axesToUse_2)); }
	inline int32_t get_axesToUse_2() const { return ___axesToUse_2; }
	inline int32_t* get_address_of_axesToUse_2() { return &___axesToUse_2; }
	inline void set_axesToUse_2(int32_t value)
	{
		___axesToUse_2 = value;
	}

	inline static int32_t get_offset_of_controlStyle_3() { return static_cast<int32_t>(offsetof(TouchPad_t1952940174, ___controlStyle_3)); }
	inline int32_t get_controlStyle_3() const { return ___controlStyle_3; }
	inline int32_t* get_address_of_controlStyle_3() { return &___controlStyle_3; }
	inline void set_controlStyle_3(int32_t value)
	{
		___controlStyle_3 = value;
	}

	inline static int32_t get_offset_of_horizontalAxisName_4() { return static_cast<int32_t>(offsetof(TouchPad_t1952940174, ___horizontalAxisName_4)); }
	inline String_t* get_horizontalAxisName_4() const { return ___horizontalAxisName_4; }
	inline String_t** get_address_of_horizontalAxisName_4() { return &___horizontalAxisName_4; }
	inline void set_horizontalAxisName_4(String_t* value)
	{
		___horizontalAxisName_4 = value;
		Il2CppCodeGenWriteBarrier(&___horizontalAxisName_4, value);
	}

	inline static int32_t get_offset_of_verticalAxisName_5() { return static_cast<int32_t>(offsetof(TouchPad_t1952940174, ___verticalAxisName_5)); }
	inline String_t* get_verticalAxisName_5() const { return ___verticalAxisName_5; }
	inline String_t** get_address_of_verticalAxisName_5() { return &___verticalAxisName_5; }
	inline void set_verticalAxisName_5(String_t* value)
	{
		___verticalAxisName_5 = value;
		Il2CppCodeGenWriteBarrier(&___verticalAxisName_5, value);
	}

	inline static int32_t get_offset_of_Xsensitivity_6() { return static_cast<int32_t>(offsetof(TouchPad_t1952940174, ___Xsensitivity_6)); }
	inline float get_Xsensitivity_6() const { return ___Xsensitivity_6; }
	inline float* get_address_of_Xsensitivity_6() { return &___Xsensitivity_6; }
	inline void set_Xsensitivity_6(float value)
	{
		___Xsensitivity_6 = value;
	}

	inline static int32_t get_offset_of_Ysensitivity_7() { return static_cast<int32_t>(offsetof(TouchPad_t1952940174, ___Ysensitivity_7)); }
	inline float get_Ysensitivity_7() const { return ___Ysensitivity_7; }
	inline float* get_address_of_Ysensitivity_7() { return &___Ysensitivity_7; }
	inline void set_Ysensitivity_7(float value)
	{
		___Ysensitivity_7 = value;
	}

	inline static int32_t get_offset_of_m_StartPos_8() { return static_cast<int32_t>(offsetof(TouchPad_t1952940174, ___m_StartPos_8)); }
	inline Vector3_t2243707580  get_m_StartPos_8() const { return ___m_StartPos_8; }
	inline Vector3_t2243707580 * get_address_of_m_StartPos_8() { return &___m_StartPos_8; }
	inline void set_m_StartPos_8(Vector3_t2243707580  value)
	{
		___m_StartPos_8 = value;
	}

	inline static int32_t get_offset_of_m_PreviousDelta_9() { return static_cast<int32_t>(offsetof(TouchPad_t1952940174, ___m_PreviousDelta_9)); }
	inline Vector2_t2243707579  get_m_PreviousDelta_9() const { return ___m_PreviousDelta_9; }
	inline Vector2_t2243707579 * get_address_of_m_PreviousDelta_9() { return &___m_PreviousDelta_9; }
	inline void set_m_PreviousDelta_9(Vector2_t2243707579  value)
	{
		___m_PreviousDelta_9 = value;
	}

	inline static int32_t get_offset_of_m_JoytickOutput_10() { return static_cast<int32_t>(offsetof(TouchPad_t1952940174, ___m_JoytickOutput_10)); }
	inline Vector3_t2243707580  get_m_JoytickOutput_10() const { return ___m_JoytickOutput_10; }
	inline Vector3_t2243707580 * get_address_of_m_JoytickOutput_10() { return &___m_JoytickOutput_10; }
	inline void set_m_JoytickOutput_10(Vector3_t2243707580  value)
	{
		___m_JoytickOutput_10 = value;
	}

	inline static int32_t get_offset_of_m_UseX_11() { return static_cast<int32_t>(offsetof(TouchPad_t1952940174, ___m_UseX_11)); }
	inline bool get_m_UseX_11() const { return ___m_UseX_11; }
	inline bool* get_address_of_m_UseX_11() { return &___m_UseX_11; }
	inline void set_m_UseX_11(bool value)
	{
		___m_UseX_11 = value;
	}

	inline static int32_t get_offset_of_m_UseY_12() { return static_cast<int32_t>(offsetof(TouchPad_t1952940174, ___m_UseY_12)); }
	inline bool get_m_UseY_12() const { return ___m_UseY_12; }
	inline bool* get_address_of_m_UseY_12() { return &___m_UseY_12; }
	inline void set_m_UseY_12(bool value)
	{
		___m_UseY_12 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalVirtualAxis_13() { return static_cast<int32_t>(offsetof(TouchPad_t1952940174, ___m_HorizontalVirtualAxis_13)); }
	inline VirtualAxis_t2691167515 * get_m_HorizontalVirtualAxis_13() const { return ___m_HorizontalVirtualAxis_13; }
	inline VirtualAxis_t2691167515 ** get_address_of_m_HorizontalVirtualAxis_13() { return &___m_HorizontalVirtualAxis_13; }
	inline void set_m_HorizontalVirtualAxis_13(VirtualAxis_t2691167515 * value)
	{
		___m_HorizontalVirtualAxis_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_HorizontalVirtualAxis_13, value);
	}

	inline static int32_t get_offset_of_m_VerticalVirtualAxis_14() { return static_cast<int32_t>(offsetof(TouchPad_t1952940174, ___m_VerticalVirtualAxis_14)); }
	inline VirtualAxis_t2691167515 * get_m_VerticalVirtualAxis_14() const { return ___m_VerticalVirtualAxis_14; }
	inline VirtualAxis_t2691167515 ** get_address_of_m_VerticalVirtualAxis_14() { return &___m_VerticalVirtualAxis_14; }
	inline void set_m_VerticalVirtualAxis_14(VirtualAxis_t2691167515 * value)
	{
		___m_VerticalVirtualAxis_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_VerticalVirtualAxis_14, value);
	}

	inline static int32_t get_offset_of_m_Dragging_15() { return static_cast<int32_t>(offsetof(TouchPad_t1952940174, ___m_Dragging_15)); }
	inline bool get_m_Dragging_15() const { return ___m_Dragging_15; }
	inline bool* get_address_of_m_Dragging_15() { return &___m_Dragging_15; }
	inline void set_m_Dragging_15(bool value)
	{
		___m_Dragging_15 = value;
	}

	inline static int32_t get_offset_of_m_Id_16() { return static_cast<int32_t>(offsetof(TouchPad_t1952940174, ___m_Id_16)); }
	inline int32_t get_m_Id_16() const { return ___m_Id_16; }
	inline int32_t* get_address_of_m_Id_16() { return &___m_Id_16; }
	inline void set_m_Id_16(int32_t value)
	{
		___m_Id_16 = value;
	}

	inline static int32_t get_offset_of_m_PreviousTouchPos_17() { return static_cast<int32_t>(offsetof(TouchPad_t1952940174, ___m_PreviousTouchPos_17)); }
	inline Vector2_t2243707579  get_m_PreviousTouchPos_17() const { return ___m_PreviousTouchPos_17; }
	inline Vector2_t2243707579 * get_address_of_m_PreviousTouchPos_17() { return &___m_PreviousTouchPos_17; }
	inline void set_m_PreviousTouchPos_17(Vector2_t2243707579  value)
	{
		___m_PreviousTouchPos_17 = value;
	}

	inline static int32_t get_offset_of_m_Center_18() { return static_cast<int32_t>(offsetof(TouchPad_t1952940174, ___m_Center_18)); }
	inline Vector3_t2243707580  get_m_Center_18() const { return ___m_Center_18; }
	inline Vector3_t2243707580 * get_address_of_m_Center_18() { return &___m_Center_18; }
	inline void set_m_Center_18(Vector3_t2243707580  value)
	{
		___m_Center_18 = value;
	}

	inline static int32_t get_offset_of_m_Image_19() { return static_cast<int32_t>(offsetof(TouchPad_t1952940174, ___m_Image_19)); }
	inline Image_t2042527209 * get_m_Image_19() const { return ___m_Image_19; }
	inline Image_t2042527209 ** get_address_of_m_Image_19() { return &___m_Image_19; }
	inline void set_m_Image_19(Image_t2042527209 * value)
	{
		___m_Image_19 = value;
		Il2CppCodeGenWriteBarrier(&___m_Image_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
