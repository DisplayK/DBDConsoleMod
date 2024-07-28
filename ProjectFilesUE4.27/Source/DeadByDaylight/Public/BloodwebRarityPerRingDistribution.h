#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "BloodwebRarityPerRingDistribution.generated.h"

USTRUCT(BlueprintType)
struct FBloodwebRarityPerRingDistribution: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CommonMinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CommonMaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CommonWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UncommonMinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UncommonMaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UncommonWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RareMinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RareMaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RareWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 VeryRareMinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 VeryRareMaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 VeryRareWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UltraRareMinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UltraRareMaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UltraRareWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ArtefactMinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ArtefactMaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ArtefactWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpectralMinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpectralMaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpectralWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpecialEventMinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpecialEventMaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpecialEventWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LegendaryMinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LegendaryMaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LegendaryWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 EpicMinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 EpicMaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 EpicWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SuperEpicMinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SuperEpicMaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SuperEpicWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UltraEpicMinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UltraEpicMaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UltraEpicWeight;

public:
	DEADBYDAYLIGHT_API FBloodwebRarityPerRingDistribution();
};

FORCEINLINE uint32 GetTypeHash(const FBloodwebRarityPerRingDistribution) { return 0; }
