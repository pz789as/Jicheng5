#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// RotateSelf
struct RotateSelf_t1914689383;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_RotateSelf1914689383.h"
#include "AssemblyU2DCSharp_RotateSelf1914689383MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera3533968274MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component2126946602MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform284553113MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Vector33525329789MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Input1593691127MethodDeclarations.h"
#include "mscorlib_System_Boolean211005341.h"
#include "mscorlib_System_Int322847414787.h"
#include "mscorlib_System_Single958209021.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RotateSelf::.ctor()
extern "C"  void RotateSelf__ctor_m337257748 (RotateSelf_t1914689383 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RotateSelf::Start()
extern "C"  void RotateSelf_Start_m3579362836 (RotateSelf_t1914689383 * __this, const MethodInfo* method)
{
	{
		Camera_t3533968274 * L_0 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t284553113 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3525329789  L_2 = Transform_get_position_m2211398607(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3525329789  L_3 = Camera_WorldToScreenPoint_m2400233676(L_0, L_2, /*hidden argument*/NULL);
		__this->set__cameraPos_2(L_3);
		return;
	}
}
// System.Void RotateSelf::Update()
extern Il2CppClass* Input_t1593691127_il2cpp_TypeInfo_var;
extern const uint32_t RotateSelf_Update_m3591917689_MetadataUsageId;
extern "C"  void RotateSelf_Update_m3591917689 (RotateSelf_t1914689383 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (RotateSelf_Update_m3591917689_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t3525329789  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3525329789  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Transform_t284553113 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t3525329789  L_1 = Vector3_get_up_m4046647141(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_m637363399(L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetMouseButtonDown_m2031691843(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		Vector3_t3525329789  L_3 = Input_get_mousePosition_m4020233228(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector3_t3525329789 * L_4 = __this->get_address_of__cameraPos_2();
		float L_5 = L_4->get_z_3();
		(&V_0)->set_z_3(L_5);
		Camera_t3533968274 * L_6 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3525329789  L_7 = V_0;
		NullCheck(L_6);
		Vector3_t3525329789  L_8 = Camera_ScreenToWorldPoint_m1572306334(L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		Transform_t284553113 * L_9 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t3525329789  L_10 = V_1;
		NullCheck(L_9);
		Transform_set_position_m3111394108(L_9, L_10, /*hidden argument*/NULL);
	}

IL_004b:
	{
		return;
	}
}
// System.Void RotateSelf::MoveLeft()
extern "C"  void RotateSelf_MoveLeft_m1476372392 (RotateSelf_t1914689383 * __this, const MethodInfo* method)
{
	{
		Transform_t284553113 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t3525329789  L_1 = Vector3_get_left_m1616598929(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_m2849099360(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RotateSelf::MoveRight()
extern "C"  void RotateSelf_MoveRight_m3963081661 (RotateSelf_t1914689383 * __this, const MethodInfo* method)
{
	{
		Transform_t284553113 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t3525329789  L_1 = Vector3_get_right_m4015137012(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_m2849099360(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RotateSelf::MoveUp()
extern "C"  void RotateSelf_MoveUp_m2164939068 (RotateSelf_t1914689383 * __this, const MethodInfo* method)
{
	{
		Transform_t284553113 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t3525329789  L_1 = Vector3_get_up_m4046647141(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_m2849099360(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RotateSelf::MoveDonw()
extern "C"  void RotateSelf_MoveDonw_m1256815605 (RotateSelf_t1914689383 * __this, const MethodInfo* method)
{
	{
		Transform_t284553113 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t3525329789  L_1 = Vector3_get_down_m1397301612(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_m2849099360(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
