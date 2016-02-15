#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t3012272455
{
	// System.Single PlayerController::speed
	float ___speed_2;
	// UnityEngine.UI.Text PlayerController::countText
	Text_t3286458198 * ___countText_3;
	// UnityEngine.UI.Text PlayerController::winText
	Text_t3286458198 * ___winText_4;
	// UnityEngine.Rigidbody PlayerController::rb
	Rigidbody_t1972007546 * ___rb_5;
	// System.Int32 PlayerController::count
	int32_t ___count_6;
};
