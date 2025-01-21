#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "TextureReplacerData.generated.h"

class UMaterialInterface;
class UTexture2D;

USTRUCT(BlueprintType)
struct FTextureReplacerData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UMaterialInterface> BaseMaterial;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UTexture2D> ReplacementTexture;

	UPROPERTY(EditAnywhere)
	FName TextureParameterName;

	UPROPERTY(EditAnywhere)
	int32 ExplicitMaterialSlot;

public:
	DEADBYDAYLIGHT_API FTextureReplacerData();
};

FORCEINLINE uint32 GetTypeHash(const FTextureReplacerData) { return 0; }
