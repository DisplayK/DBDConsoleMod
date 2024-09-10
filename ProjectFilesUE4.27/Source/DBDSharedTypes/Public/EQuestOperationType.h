#pragma once

#include "CoreMinimal.h"
#include "EQuestOperationType.generated.h"

UENUM(BlueprintType)
enum class EQuestOperationType : uint8
{
	EQ,
	GEQ,
	LEQ,
	G,
	L,
	None = 255,
};
