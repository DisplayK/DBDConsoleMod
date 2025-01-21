#pragma once

#include "CoreMinimal.h"
#include "RecommendationsFilter.h"
#include "ItemRecommendationsFilter.generated.h"

UCLASS()
class UItemRecommendationsFilter : public URecommendationsFilter
{
	GENERATED_BODY()

public:
	UItemRecommendationsFilter();
};

FORCEINLINE uint32 GetTypeHash(const UItemRecommendationsFilter) { return 0; }
