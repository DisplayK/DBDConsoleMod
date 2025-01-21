#pragma once

#include "CoreMinimal.h"
#include "RarityMaterialData.generated.h"

class UMaterialInterface;

USTRUCT()
struct FRarityMaterialData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	UMaterialInterface* LoadoutPartMaterial;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* CustomizationMaterial;

public:
	DBDSHAREDTYPES_API FRarityMaterialData();
};

FORCEINLINE uint32 GetTypeHash(const FRarityMaterialData) { return 0; }
