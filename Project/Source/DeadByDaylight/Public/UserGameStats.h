#pragma once

#include "CoreMinimal.h"
#include "EDBDScoreCategory.h"
#include "UserGameStats.generated.h"

USTRUCT(BlueprintType)
struct FUserGameStats
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	bool Disconnected;

	UPROPERTY()
	int32 FearTokens;

	UPROPERTY()
	int32 Skulls;

	UPROPERTY(Transient)
	TMap<EDBDScoreCategory, int32> BonusBloodpoints;

private:
	UPROPERTY(Transient)
	TMap<EDBDScoreCategory, int32> _bloodpoints;

public:
	DEADBYDAYLIGHT_API FUserGameStats();
};

FORCEINLINE uint32 GetTypeHash(const FUserGameStats) { return 0; }
