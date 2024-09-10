#pragma once

#include "CoreMinimal.h"
#include "AwardedScore.h"
#include "AwardedScores.generated.h"

USTRUCT(BlueprintType)
struct FAwardedScores
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FAwardedScore> Array;

public:
	DEADBYDAYLIGHT_API FAwardedScores();
};

FORCEINLINE uint32 GetTypeHash(const FAwardedScores) { return 0; }
