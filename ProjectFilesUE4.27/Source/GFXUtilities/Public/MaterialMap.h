#pragma once

#include "CoreMinimal.h"
#include "MaterialMap.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FMaterialMap
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UMaterialInterface* SrcMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UMaterialInterface* DstMaterial;

public:
	GFXUTILITIES_API FMaterialMap();
};

FORCEINLINE uint32 GetTypeHash(const FMaterialMap) { return 0; }
