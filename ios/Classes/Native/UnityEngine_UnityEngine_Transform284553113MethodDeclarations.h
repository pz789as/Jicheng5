#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Transform
struct Transform_t284553113;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Space1602970931.h"

// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t1891715979  Transform_get_rotation_m11483428 (Transform_t284553113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_rotation_m1525803229 (Transform_t284553113 * __this, Quaternion_t1891715979  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C"  void Transform_INTERNAL_get_rotation_m2389720173 (Transform_t284553113 * __this, Quaternion_t1891715979 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C"  void Transform_INTERNAL_set_rotation_m2051942009 (Transform_t284553113 * __this, Quaternion_t1891715979 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C"  Quaternion_t1891715979  Transform_get_localRotation_m3343229381 (Transform_t284553113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_localRotation_m3719981474 (Transform_t284553113 * __this, Quaternion_t1891715979  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
extern "C"  void Transform_INTERNAL_get_localRotation_m1409235788 (Transform_t284553113 * __this, Quaternion_t1891715979 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
extern "C"  void Transform_INTERNAL_set_localRotation_m2898114752 (Transform_t284553113 * __this, Quaternion_t1891715979 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
extern "C"  void Transform_Rotate_m637363399 (Transform_t284553113 * __this, Vector3_t3525329789  ___eulerAngles0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
extern "C"  void Transform_Rotate_m3141515812 (Transform_t284553113 * __this, Vector3_t3525329789  ___eulerAngles0, int32_t ___relativeTo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C"  int32_t Transform_get_childCount_m2107810675 (Transform_t284553113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C"  Il2CppObject * Transform_GetEnumerator_m688365631 (Transform_t284553113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C"  Transform_t284553113 * Transform_GetChild_m4040462992 (Transform_t284553113 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
