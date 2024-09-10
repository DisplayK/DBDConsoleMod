#pragma once

#include "CoreMinimal.h"
#include "Materials/MaterialExpressionCustomOutput.h"
#include "MaterialExpressionBHVRCustomColorSampler.generated.h"

UCLASS()
class UMaterialExpressionBHVRCustomColorSampler : public UMaterialExpressionCustomOutput
{
	GENERATED_BODY()

public:
	UMaterialExpressionBHVRCustomColorSampler();
};

FORCEINLINE uint32 GetTypeHash(const UMaterialExpressionBHVRCustomColorSampler) { return 0; }
