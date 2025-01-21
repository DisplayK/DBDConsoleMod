#pragma once

#include "CoreMinimal.h"
#include "LegacySavedBloodwebNodeProperties.h"
#include "EBloodwebNodeState.h"
#include "LegacySavedBloodwebNodeGate.h"
#include "LegacySavedBloodwebChest.h"
#include "LegacySavedBloodwebNode.generated.h"

USTRUCT()
struct FLegacySavedBloodwebNode
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	FLegacySavedBloodwebNodeProperties Properties;

	UPROPERTY(SaveGame)
	TArray<FLegacySavedBloodwebNodeGate> Gates;

	UPROPERTY(SaveGame)
	EBloodwebNodeState State;

	UPROPERTY(SaveGame)
	FString NodeID;

	UPROPERTY(SaveGame)
	FName ContentId;

	UPROPERTY(SaveGame)
	FLegacySavedBloodwebChest BloodwebChest;

public:
	DEADBYDAYLIGHT_API FLegacySavedBloodwebNode();
};

FORCEINLINE uint32 GetTypeHash(const FLegacySavedBloodwebNode) { return 0; }
