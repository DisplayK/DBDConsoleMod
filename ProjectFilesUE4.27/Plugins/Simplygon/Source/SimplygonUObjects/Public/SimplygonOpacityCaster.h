#pragma once

#include "CoreMinimal.h"
#include "SimplygonMaterialCaster.h"
#include "OpacityCasterSettings.h"
#include "SimplygonOpacityCaster.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SIMPLYGONUOBJECTS_API USimplygonOpacityCaster : public USimplygonMaterialCaster
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FOpacityCasterSettings OpacityCasterSettings;

public:
	USimplygonOpacityCaster();
};

FORCEINLINE uint32 GetTypeHash(const USimplygonOpacityCaster) { return 0; }
