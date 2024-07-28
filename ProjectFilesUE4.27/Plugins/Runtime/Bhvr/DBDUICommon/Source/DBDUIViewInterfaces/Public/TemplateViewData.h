#pragma once

#include "CoreMinimal.h"
#include "TemplateViewData.generated.h"

USTRUCT(BlueprintType)
struct FTemplateViewData
{
	GENERATED_BODY()

public:
	DBDUIVIEWINTERFACES_API FTemplateViewData();
};

FORCEINLINE uint32 GetTypeHash(const FTemplateViewData) { return 0; }
