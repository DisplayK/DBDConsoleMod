#pragma once

#include "CoreMinimal.h"
#include "SimplygonMaterialCaster.h"
#include "GeometryDataCasterSettings.h"
#include "SimplygonGeometryDataCaster.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SIMPLYGONUOBJECTS_API USimplygonGeometryDataCaster : public USimplygonMaterialCaster
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGeometryDataCasterSettings GeometryDataCasterSettings;

public:
	USimplygonGeometryDataCaster();
};

FORCEINLINE uint32 GetTypeHash(const USimplygonGeometryDataCaster) { return 0; }
