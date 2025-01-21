#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "GarantiedRarityRingDistributionValues.generated.h"

USTRUCT(BlueprintType)
struct FGarantiedRarityRingDistributionValues: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InnerRingCommonItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MiddleRingCommonItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OuterRingCommonItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InnerRingUncommonItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MiddleRingUncommonItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OuterRingUncommonItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InnerRingRareItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MiddleRingRareItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OuterRingRareItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InnerRingVeryRareItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MiddleRingVeryRareItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OuterRingVeryRareItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InnerRingUltraRareItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MiddleRingUltraRareItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OuterRingUltraRareItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InnerRingArtifactItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MiddleRingArtifactItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OuterRingArtifactItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InnerRingSpectralItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MiddleRingSpectralItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OuterRingSpectralItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InnerRingSpecialEventItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MiddleRingSpecialEventItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OuterRingSpecialEventItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InnerRingLegendaryItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MiddleRingLegendaryItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OuterRingLegendaryItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InnerRingEpicItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MiddleRingEpicItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OuterRingEpicItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InnerRingSuperEpicItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MiddleRingSuperEpicItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OuterRingSuperEpicItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InnerRingUltraEpicItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MiddleRingUltraEpicItemProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OuterRingUltraEpicItemProbability;

public:
	DEADBYDAYLIGHT_API FGarantiedRarityRingDistributionValues();
};

FORCEINLINE uint32 GetTypeHash(const FGarantiedRarityRingDistributionValues) { return 0; }
