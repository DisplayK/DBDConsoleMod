#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "BloodwebPrestigeModifiers.generated.h"

USTRUCT(BlueprintType)
struct FBloodwebPrestigeModifiers: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CommonItemProbabilityModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UncommonItemProbabilityModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RareItemProbabilityModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VeryRareItemProbabilityModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UltraRareItemProbabilityModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ArtifactItemProbabilityModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpectralItemProbabilityModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LegendaryItemProbabilityModifier;

public:
	DEADBYDAYLIGHT_API FBloodwebPrestigeModifiers();
};

FORCEINLINE uint32 GetTypeHash(const FBloodwebPrestigeModifiers) { return 0; }
