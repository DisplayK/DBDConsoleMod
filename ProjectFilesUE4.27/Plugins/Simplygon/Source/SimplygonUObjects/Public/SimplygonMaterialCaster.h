#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SimplygonMaterialCaster.generated.h"

UCLASS(Abstract, DefaultToInstanced, EditInlineNew)
class SIMPLYGONUOBJECTS_API USimplygonMaterialCaster : public UObject
{
	GENERATED_BODY()

public:
	USimplygonMaterialCaster();
};

FORCEINLINE uint32 GetTypeHash(const USimplygonMaterialCaster) { return 0; }
