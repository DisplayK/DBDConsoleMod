#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RecommendationsFilter.generated.h"

UCLASS()
class URecommendationsFilter : public UObject
{
	GENERATED_BODY()

public:
	URecommendationsFilter();
};

FORCEINLINE uint32 GetTypeHash(const URecommendationsFilter) { return 0; }
