#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "EDBDScoreTypes.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "DailyRitualInstance.generated.h"

class URitualEvaluatorBase;

USTRUCT(BlueprintType)
struct FDailyRitualInstance
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString RitualId;

	UPROPERTY()
	TArray<EDBDScoreTypes> TrackedEvents;

	UPROPERTY()
	TArray<FGameplayTag> TrackedGameEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> CharacterIDs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EPlayerRole> Roles;

	UPROPERTY()
	float Progress;

	UPROPERTY()
	float Threshold;

	UPROPERTY()
	float Tolerance;

	UPROPERTY()
	float DisplayThreshold;

	UPROPERTY()
	float ExpReward;

	UPROPERTY()
	bool Active;

	UPROPERTY()
	bool IsTemporary;

	UPROPERTY()
	FDateTime DateAssigned;

	UPROPERTY()
	URitualEvaluatorBase* Evaluator;

public:
	DEADBYDAYLIGHT_API FDailyRitualInstance();
};

FORCEINLINE uint32 GetTypeHash(const FDailyRitualInstance) { return 0; }
