#pragma once

#include "CoreMinimal.h"
#include "ChainsawAnalyticsBaseComponent.h"
#include "HillbillyAnalyticsComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UHillbillyAnalyticsComponent : public UChainsawAnalyticsBaseComponent
{
	GENERATED_BODY()

public:
	UHillbillyAnalyticsComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHillbillyAnalyticsComponent) { return 0; }
