#pragma once

#include "CoreMinimal.h"
#include "ScoreCategoryUIExtraData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FScoreCategoryUIExtraData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Transient)
	FText ScoreCategoryName;

	UPROPERTY(EditAnywhere, Transient)
	UTexture2D* ScoreCategoryAsset;

	UPROPERTY(BlueprintReadOnly, Transient)
	int32 ScoreValue;

public:
	DEADBYDAYLIGHT_API FScoreCategoryUIExtraData();
};

FORCEINLINE uint32 GetTypeHash(const FScoreCategoryUIExtraData) { return 0; }
