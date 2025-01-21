#pragma once

#include "CoreMinimal.h"
#include "EK25ChainDetachmentReason.generated.h"

UENUM(BlueprintType)
enum class EK25ChainDetachmentReason : uint8
{
	CollisionOrMaxLengthReached,
	KillerAttack,
	RemovedByInteraction,
	MaxNumberChainsReached,
	ForcedRemoved,
	SurvivorKO,
	EndGameCollapseOver,
	SurvivorLeftTheMatch,
};
