#pragma once

#include "CoreMinimal.h"
#include "SimplygonMaterialCaster.h"
#include "DisplacementCasterSettings.h"
#include "SimplygonDisplacementCaster.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SIMPLYGONUOBJECTS_API USimplygonDisplacementCaster : public USimplygonMaterialCaster
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDisplacementCasterSettings DisplacementCasterSettings;

public:
	USimplygonDisplacementCaster();
};

FORCEINLINE uint32 GetTypeHash(const USimplygonDisplacementCaster) { return 0; }
