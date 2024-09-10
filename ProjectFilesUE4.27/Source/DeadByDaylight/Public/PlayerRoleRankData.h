#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "PlayerRoleRankData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerRoleRankData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Transient)
	EPlayerRole PlayerRole;

	UPROPERTY(BlueprintReadOnly, Transient)
	int32 Rank;

	UPROPERTY(BlueprintReadOnly, Transient)
	int32 PipsRequiredForNextRank;

	UPROPERTY(BlueprintReadOnly, Transient)
	int32 ActivePips;

public:
	DEADBYDAYLIGHT_API FPlayerRoleRankData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerRoleRankData) { return 0; }
