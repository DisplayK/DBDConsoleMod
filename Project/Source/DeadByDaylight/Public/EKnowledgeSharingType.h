#pragma once

#include "CoreMinimal.h"
#include "EKnowledgeSharingType.generated.h"

UENUM(BlueprintType)
enum class EKnowledgeSharingType : uint8
{
	Possessor,
	Survivors,
	Killers,
	All,
};
