#pragma once

#include "CoreMinimal.h"
#include "EDBDScoreTypes.h"
#include "GameplayTagContainer.h"
#include "OngoingScoreData.generated.h"

class AActor;
class UObject;

USTRUCT(BlueprintType)
struct FOngoingScoreData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	EDBDScoreTypes ScoreType;

	UPROPERTY()
	FGameplayTag ScoreTypeTag;

	UPROPERTY()
	float TimeSinceScore;

	UPROPERTY()
	float ApplyScoreTimeout;

	UPROPERTY()
	float AccumulatedPercent;

	UPROPERTY()
	AActor* Target;

	UPROPERTY()
	UObject* CustomObjectParameter;

public:
	DEADBYDAYLIGHT_API FOngoingScoreData();
};

FORCEINLINE uint32 GetTypeHash(const FOngoingScoreData) { return 0; }
