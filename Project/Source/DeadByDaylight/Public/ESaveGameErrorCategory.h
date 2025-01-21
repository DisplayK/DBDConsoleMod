#pragma once

#include "CoreMinimal.h"
#include "ESaveGameErrorCategory.generated.h"

UENUM(BlueprintType)
enum class ESaveGameErrorCategory : uint8
{
	EvaluateDisconnectPenalty,
	SaveGameSaveError,
	SaveGameUnreadable,
	SaveGameValidation,
	SaveFailed,
};
