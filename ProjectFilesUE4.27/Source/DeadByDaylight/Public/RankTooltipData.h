#pragma once

#include "CoreMinimal.h"
#include "BaseTooltipData.h"
#include "EPlayerRole.h"
#include "PlayerRoleRankData.h"
#include "RankTooltipData.generated.h"

USTRUCT()
struct FRankTooltipData: public FBaseTooltipData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	EPlayerRole CurrentPlayerRole;

	UPROPERTY(Transient)
	FPlayerRoleRankData SurvivorRankData;

	UPROPERTY(Transient)
	FPlayerRoleRankData KillerRankData;

public:
	DEADBYDAYLIGHT_API FRankTooltipData();
};

FORCEINLINE uint32 GetTypeHash(const FRankTooltipData) { return 0; }
