#pragma once

#include "CoreMinimal.h"
#include "EBloodwebSaveReason.generated.h"

UENUM(BlueprintType)
enum class EBloodwebSaveReason : uint8
{
	PayToRefresh,
	PrestigeUp,
	ShouldRebuild,
	Cheat,
};
