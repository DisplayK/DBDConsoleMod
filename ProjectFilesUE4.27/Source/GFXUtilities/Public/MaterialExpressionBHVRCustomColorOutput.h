#pragma once

#include "CoreMinimal.h"
#include "Materials/MaterialExpressionCustomOutput.h"
#include "Materials/MaterialExpression.h"
#include "MaterialExpressionBHVRCustomColorOutput.generated.h"

UCLASS()
class UMaterialExpressionBHVRCustomColorOutput : public UMaterialExpressionCustomOutput
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FExpressionInput Input;

public:
	UMaterialExpressionBHVRCustomColorOutput();
};

FORCEINLINE uint32 GetTypeHash(const UMaterialExpressionBHVRCustomColorOutput) { return 0; }
