#pragma once

#include "CoreMinimal.h"
#include "PlayerLobbyOrderData.generated.h"

USTRUCT()
struct FPlayerLobbyOrderData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString playerId;

	UPROPERTY()
	int32 slotIndex;

public:
	DEADBYDAYLIGHT_API FPlayerLobbyOrderData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerLobbyOrderData) { return 0; }
