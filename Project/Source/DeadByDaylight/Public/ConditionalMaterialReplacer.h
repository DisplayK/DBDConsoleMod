#pragma once

#include "CoreMinimal.h"
#include "MaterialReplacerArray.h"
#include "ConditionalMaterialReplacer.generated.h"

USTRUCT(BlueprintType)
struct FConditionalMaterialReplacer
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName ItemTag;

	UPROPERTY(EditAnywhere)
	TMap<FName, FMaterialReplacerArray> ConditionalMaterials;

public:
	DEADBYDAYLIGHT_API FConditionalMaterialReplacer();
};

FORCEINLINE uint32 GetTypeHash(const FConditionalMaterialReplacer) { return 0; }
