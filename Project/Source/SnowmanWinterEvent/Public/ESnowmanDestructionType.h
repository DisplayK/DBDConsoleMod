#pragma once

#include "CoreMinimal.h"
#include "ESnowmanDestructionType.generated.h"

UENUM(BlueprintType)
enum class ESnowmanDestructionType : uint8
{
	None,
	SurvivorRunExit,
	KillerAttackExit,
	KillerCancelExit,
	KillerAttackWhileControlled,
	KillerAttackWhileEmpty,
};
