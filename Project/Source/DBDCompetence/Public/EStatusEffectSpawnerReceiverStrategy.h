#pragma once

#include "CoreMinimal.h"
#include "EStatusEffectSpawnerReceiverStrategy.generated.h"

UENUM(BlueprintType)
enum class EStatusEffectSpawnerReceiverStrategy : uint8
{
	AllCharacter,
	PawnType,
	OriginatingPlayer,
};
