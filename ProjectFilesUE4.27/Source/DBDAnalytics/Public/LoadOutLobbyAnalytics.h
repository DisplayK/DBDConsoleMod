#pragma once

#include "CoreMinimal.h"
#include "LoadoutBaseAnalytics.h"
#include "LoadOutLobbyAnalytics.generated.h"

USTRUCT()
struct FLoadOutLobbyAnalytics: public FLoadoutBaseAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 Level;

	UPROPERTY()
	int32 Prestige;

	UPROPERTY()
	FString CharacterName;

	UPROPERTY()
	FString LobbyId;

public:
	DBDANALYTICS_API FLoadOutLobbyAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FLoadOutLobbyAnalytics) { return 0; }
