#pragma once

#include "types.h"
#include "nativeCaller.h"

namespace AI
{
	static void TASK_START_SCENARIO_IN_PLACE(Ped ped, Hash scenarioHash, int duration, BOOL p3IntroOutro, BOOL p4Unknown, BOOL p5Unknown, float p6Unknown, BOOL p7Unknown) { invoke<Void>(0x524B54361229154F, ped, scenarioHash, duration, p3IntroOutro, p4Unknown, p5Unknown, p6Unknown, p7Unknown); }
}