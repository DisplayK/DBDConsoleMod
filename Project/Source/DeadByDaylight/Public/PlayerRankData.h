#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "PlayerRankData.generated.h"

USTRUCT()
struct FPlayerRankData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	FString MirrorsId;

	UPROPERTY(Transient)
	EPlayerRole PlayerRole;

	UPROPERTY(Transient)
	int32 PlayerRankForRole;

public:
	DEADBYDAYLIGHT_API FPlayerRankData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerRankData) { return 0; }
