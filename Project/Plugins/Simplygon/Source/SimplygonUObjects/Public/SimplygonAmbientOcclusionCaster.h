#pragma once

#include "CoreMinimal.h"
#include "SimplygonMaterialCaster.h"
#include "AmbientOcclusionCasterSettings.h"
#include "SimplygonAmbientOcclusionCaster.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SIMPLYGONUOBJECTS_API USimplygonAmbientOcclusionCaster : public USimplygonMaterialCaster
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAmbientOcclusionCasterSettings AmbientOcclusionCasterSettings;

public:
	USimplygonAmbientOcclusionCaster();
};

FORCEINLINE uint32 GetTypeHash(const USimplygonAmbientOcclusionCaster) { return 0; }
