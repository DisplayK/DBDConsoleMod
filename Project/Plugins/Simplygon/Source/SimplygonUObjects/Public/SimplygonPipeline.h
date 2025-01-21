#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SimplygonPipeline.generated.h"

UCLASS(Abstract, DefaultToInstanced, EditInlineNew)
class SIMPLYGONUOBJECTS_API USimplygonPipeline : public UObject
{
	GENERATED_BODY()

public:
	USimplygonPipeline();
};

FORCEINLINE uint32 GetTypeHash(const USimplygonPipeline) { return 0; }
