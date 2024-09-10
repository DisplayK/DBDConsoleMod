#pragma once

#include "CoreMinimal.h"
#include "SimplygonMaterialCaster.h"
#include "NormalCasterSettings.h"
#include "SimplygonNormalCaster.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SIMPLYGONUOBJECTS_API USimplygonNormalCaster : public USimplygonMaterialCaster
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FNormalCasterSettings NormalCasterSettings;

public:
	USimplygonNormalCaster();
};

FORCEINLINE uint32 GetTypeHash(const USimplygonNormalCaster) { return 0; }
