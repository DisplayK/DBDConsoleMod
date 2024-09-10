#pragma once

#include "CoreMinimal.h"
#include "EmblemSlotData.h"
#include "TallyScorePipsData.generated.h"

USTRUCT(BlueprintType)
struct FTallyScorePipsData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Transient)
	float Threshold;

	UPROPERTY(BlueprintReadOnly, Transient)
	TArray<float> PipThresholds;

	UPROPERTY(BlueprintReadOnly, Transient)
	TArray<FEmblemSlotData> Scores;

	UPROPERTY(BlueprintReadOnly, Transient)
	int32 PipsDelta;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsSlasher;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsCustomMatch;

public:
	DEADBYDAYLIGHT_API FTallyScorePipsData();
};

FORCEINLINE uint32 GetTypeHash(const FTallyScorePipsData) { return 0; }
