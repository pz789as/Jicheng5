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
#include "UnityEngine_UnityEngine_Component2126946602MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector33525329789MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform284553113MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

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
		return;
	}
}
// System.Void RotateSelf::Update()
extern "C"  void RotateSelf_Update_m3591917689 (RotateSelf_t1914689383 * __this, const MethodInfo* method)
{
	{
		Transform_t284553113 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t3525329789  L_1 = Vector3_get_up_m4046647141(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_m637363399(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
