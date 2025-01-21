#pragma once

#include "CoreMinimal.h"
#include "ELamentConfigurationDropReason.generated.h"

UENUM(BlueprintType)
enum class ELamentConfigurationDropReason : uint8
{
	SurvivorSolved,
	SurvivorIsNoLongerHostage,
	SurvivorDowned,
	KillerCollect,
	Other,
};
