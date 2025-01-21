#pragma once

#include "CoreMinimal.h"
#include "ENearGameObjectQuestObjectType.generated.h"

UENUM(BlueprintType)
enum class ENearGameObjectQuestObjectType : uint8
{
	Generator,
	Pallet,
	Count,
};
