#pragma once

#include "CoreMinimal.h"
#include "ECollectableCategory.h"
#include "SurvivorItemProperties.generated.h"

USTRUCT(BlueprintType)
struct FSurvivorItemProperties
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECollectableCategory Category;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxPopulation;

public:
	DEADBYDAYLIGHT_API FSurvivorItemProperties();
};

FORCEINLINE uint32 GetTypeHash(const FSurvivorItemProperties) { return 0; }
