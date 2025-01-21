#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "EGameType.h"
#include "GameInfoEventData.generated.h"

USTRUCT()
struct FGameInfoEventData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	EPlayerRole PlayerRole;

	UPROPERTY(Transient)
	EGameType GameType;

public:
	DEADBYDAYLIGHT_API FGameInfoEventData();
};

FORCEINLINE uint32 GetTypeHash(const FGameInfoEventData) { return 0; }
