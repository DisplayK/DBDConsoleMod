#pragma once

#include "CoreMinimal.h"
#include "SimplygonMaterialCaster.h"
#include "ColorCasterSettings.h"
#include "SimplygonColorCaster.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SIMPLYGONUOBJECTS_API USimplygonColorCaster : public USimplygonMaterialCaster
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FColorCasterSettings ColorCasterSettings;

public:
	USimplygonColorCaster();
};

FORCEINLINE uint32 GetTypeHash(const USimplygonColorCaster) { return 0; }
