#pragma once

#include "CoreMinimal.h"
#include "HideNearKillerQEEvaluator.h"
#include "HideNearKillerWhileInjuredQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UHideNearKillerWhileInjuredQEEvaluator : public UHideNearKillerQEEvaluator
{
	GENERATED_BODY()

public:
	UHideNearKillerWhileInjuredQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UHideNearKillerWhileInjuredQEEvaluator) { return 0; }
