#pragma once

#include "CoreMinimal.h"
#include "EItemRarity.h"
#include "EPlayerRole.h"
#include "EBloodwebNodeGateTypes.h"
#include "LegacySavedBloodwebNodeGate.generated.h"

USTRUCT()
struct FLegacySavedBloodwebNodeGate
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	FName Description;

	UPROPERTY(SaveGame)
	EItemRarity Rarity;

	UPROPERTY(SaveGame)
	EPlayerRole Role;

	UPROPERTY(SaveGame)
	EBloodwebNodeGateTypes GateType;

	UPROPERTY(SaveGame)
	FString Param;

public:
	DEADBYDAYLIGHT_API FLegacySavedBloodwebNodeGate();
};

FORCEINLINE uint32 GetTypeHash(const FLegacySavedBloodwebNodeGate) { return 0; }
