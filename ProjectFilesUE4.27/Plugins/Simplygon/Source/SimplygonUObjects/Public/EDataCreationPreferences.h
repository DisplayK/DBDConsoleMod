#pragma once

#include "CoreMinimal.h"
#include "EDataCreationPreferences.generated.h"

UENUM(BlueprintType)
enum class EDataCreationPreferences : uint8
{
	OnlyUseOriginalData,
	PreferOriginalData,
	PreferOptimizedResult,
};
