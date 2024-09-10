#pragma once

#include "CoreMinimal.h"
#include "LobbyPlayerData.generated.h"

USTRUCT()
struct FLobbyPlayerData
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FLobbyPlayerData();
};

FORCEINLINE uint32 GetTypeHash(const FLobbyPlayerData) { return 0; }
