#pragma once

#include "CoreMinimal.h"
#include "RecommendationsFilter.h"
#include "OutfitRecommendationsFilter.generated.h"

UCLASS()
class UOutfitRecommendationsFilter : public URecommendationsFilter
{
	GENERATED_BODY()

public:
	UOutfitRecommendationsFilter();
};

FORCEINLINE uint32 GetTypeHash(const UOutfitRecommendationsFilter) { return 0; }
