#pragma once

#include "CoreMinimal.h"
#include "HideNearKillerQEEvaluator.h"
#include "HideInTerrorRadiusQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UHideInTerrorRadiusQEEvaluator : public UHideNearKillerQEEvaluator
{
	GENERATED_BODY()

public:
	UHideInTerrorRadiusQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UHideInTerrorRadiusQEEvaluator) { return 0; }
