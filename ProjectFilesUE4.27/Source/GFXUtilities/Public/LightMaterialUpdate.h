#pragma once

#include "CoreMinimal.h"
#include "LightMaterialUpdate.generated.h"

class UMaterialHelper;

USTRUCT(BlueprintType)
struct FLightMaterialUpdate
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Export)
	UMaterialHelper* material;

	UPROPERTY(EditAnywhere)
	FName propertyName;

	UPROPERTY(EditAnywhere)
	float multiplier;

public:
	GFXUTILITIES_API FLightMaterialUpdate();
};

FORCEINLINE uint32 GetTypeHash(const FLightMaterialUpdate) { return 0; }
