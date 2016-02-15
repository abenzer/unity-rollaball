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

// CameraController
struct CameraController_t3473169601;
// PlayerController
struct PlayerController_t2866526589;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// System.Object
struct Object_t;
// UnityEngine.Collider
struct Collider_t955670625;
// Rotator
struct Rotator_t3048826765;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_CameraController3473169601.h"
#include "AssemblyU2DCSharp_CameraController3473169601MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component2126946602MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform284553113MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject4012695102MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector33525329789MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "AssemblyU2DCSharp_PlayerController2866526589.h"
#include "AssemblyU2DCSharp_PlayerController2866526589MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody1972007546.h"
#include "UnityEngine_UnityEngine_Component2126946602.h"
#include "mscorlib_System_Int322847414787.h"
#include "UnityEngine_UI_UnityEngine_UI_Text3286458198.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_String968488902MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Text3286458198MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Input1593691127MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody1972007546MethodDeclarations.h"
#include "mscorlib_System_Single958209021.h"
#include "UnityEngine_UnityEngine_Collider955670625.h"
#include "mscorlib_System_Boolean211005341.h"
#include "mscorlib_System_Int322847414787MethodDeclarations.h"
#include "AssemblyU2DCSharp_Rotator3048826765.h"
#include "AssemblyU2DCSharp_Rotator3048826765MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time1525492538MethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Object_t * Component_GetComponent_TisObject_t_m267839954_gshared (Component_t2126946602 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m267839954(__this, method) ((  Object_t * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisObject_t_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t1972007546_m2174365699(__this, method) ((  Rigidbody_t1972007546 * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisObject_t_m267839954_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraController::.ctor()
extern "C"  void CameraController__ctor_m1305907962 (CameraController_t3473169601 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController::Start()
extern "C"  void CameraController_Start_m253045754 (CameraController_t3473169601 * __this, const MethodInfo* method)
{
	{
		Transform_t284553113 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3525329789  L_1 = Transform_get_position_m2211398607(L_0, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_2 = (__this->___player_2);
		NullCheck(L_2);
		Transform_t284553113 * L_3 = GameObject_get_transform_m1278640159(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3525329789  L_4 = Transform_get_position_m2211398607(L_3, /*hidden argument*/NULL);
		Vector3_t3525329789  L_5 = Vector3_op_Subtraction_m2842958165(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		__this->___offset_3 = L_5;
		return;
	}
}
// System.Void CameraController::LateUpdate()
extern "C"  void CameraController_LateUpdate_m786793369 (CameraController_t3473169601 * __this, const MethodInfo* method)
{
	{
		Transform_t284553113 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		GameObject_t4012695102 * L_1 = (__this->___player_2);
		NullCheck(L_1);
		Transform_t284553113 * L_2 = GameObject_get_transform_m1278640159(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3525329789  L_3 = Transform_get_position_m2211398607(L_2, /*hidden argument*/NULL);
		Vector3_t3525329789  L_4 = (__this->___offset_3);
		Vector3_t3525329789  L_5 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_m3111394108(L_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m2658519486 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Start()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t1972007546_m2174365699_MethodInfo_var;
extern const uint32_t PlayerController_Start_m1605657278_MetadataUsageId;
extern "C"  void PlayerController_Start_m1605657278 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Start_m1605657278_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rigidbody_t1972007546 * L_0 = Component_GetComponent_TisRigidbody_t1972007546_m2174365699(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t1972007546_m2174365699_MethodInfo_var);
		__this->___rb_5 = L_0;
		__this->___count_6 = 0;
		PlayerController_SetCountText_m1021738208(__this, /*hidden argument*/NULL);
		Text_t3286458198 * L_1 = (__this->___winText_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(65 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
extern TypeInfo* Input_t1593691127_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3381094468;
extern Il2CppCodeGenString* _stringLiteral2375469974;
extern const uint32_t PlayerController_FixedUpdate_m270852281_MetadataUsageId;
extern "C"  void PlayerController_FixedUpdate_m270852281 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_FixedUpdate_m270852281_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t3525329789  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral3381094468, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral2375469974, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = V_0;
		float L_3 = V_1;
		Vector3__ctor_m2926210380((&V_2), L_2, (0.0f), L_3, /*hidden argument*/NULL);
		Rigidbody_t1972007546 * L_4 = (__this->___rb_5);
		Vector3_t3525329789  L_5 = V_2;
		float L_6 = (__this->___speed_2);
		Vector3_t3525329789  L_7 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Rigidbody_AddForce_m3682301239(L_4, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnTriggerEnter(UnityEngine.Collider)
extern Il2CppCodeGenString* _stringLiteral1086561018;
extern const uint32_t PlayerController_OnTriggerEnter_m3392021114_MetadataUsageId;
extern "C"  void PlayerController_OnTriggerEnter_m3392021114 (PlayerController_t2866526589 * __this, Collider_t955670625 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_OnTriggerEnter_m3392021114_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider_t955670625 * L_0 = ___other;
		NullCheck(L_0);
		GameObject_t4012695102 * L_1 = Component_get_gameObject_m1170635899(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = GameObject_CompareTag_m3153977471(L_1, _stringLiteral1086561018, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		Collider_t955670625 * L_3 = ___other;
		NullCheck(L_3);
		GameObject_t4012695102 * L_4 = Component_get_gameObject_m1170635899(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m3538205401(L_4, (bool)0, /*hidden argument*/NULL);
		int32_t L_5 = (__this->___count_6);
		__this->___count_6 = ((int32_t)((int32_t)L_5+(int32_t)1));
		PlayerController_SetCountText_m1021738208(__this, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void PlayerController::SetCountText()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2622482517;
extern Il2CppCodeGenString* _stringLiteral3602770758;
extern const uint32_t PlayerController_SetCountText_m1021738208_MetadataUsageId;
extern "C"  void PlayerController_SetCountText_m1021738208 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_SetCountText_m1021738208_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t3286458198 * L_0 = (__this->___countText_3);
		int32_t* L_1 = &(__this->___count_6);
		String_t* L_2 = Int32_ToString_m1286526384(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m138640077(NULL /*static, unused*/, _stringLiteral2622482517, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(65 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		int32_t L_4 = (__this->___count_6);
		if ((((int32_t)L_4) < ((int32_t)((int32_t)9))))
		{
			goto IL_003d;
		}
	}
	{
		Text_t3286458198 * L_5 = (__this->___winText_4);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(65 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral3602770758);
	}

IL_003d:
	{
		return;
	}
}
// System.Void Rotator::.ctor()
extern "C"  void Rotator__ctor_m1971779198 (Rotator_t3048826765 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Rotator::Update()
extern "C"  void Rotator_Update_m2722475087 (Rotator_t3048826765 * __this, const MethodInfo* method)
{
	{
		Transform_t284553113 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t3525329789  L_1 = {0};
		Vector3__ctor_m2926210380(&L_1, (15.0f), (30.0f), (45.0f), /*hidden argument*/NULL);
		float L_2 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3525329789  L_3 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_m637363399(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
