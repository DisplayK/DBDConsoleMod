#pragma once

#include "CoreMinimal.h"
#include "SimplygonMaterialCaster.h"
#include "VertexColorCasterSettings.h"
#include "SimplygonVertexColorCaster.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SIMPLYGONUOBJECTS_API USimplygonVertexColorCaster : public USimplygonMaterialCaster
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVertexColorCasterSettings VertexColorCasterSettings;

public:
	USimplygonVertexColorCaster();
};

FORCEINLINE uint32 GetTypeHash(const USimplygonVertexColorCaster) { return 0; }
