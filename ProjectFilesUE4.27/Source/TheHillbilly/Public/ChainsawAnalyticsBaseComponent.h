#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ChainsawAnalyticsBaseComponent.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class THEHILLBILLY_API UChainsawAnalyticsBaseComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _maxDistanceFromHookToBeConsideredCamping;

public:
	UChainsawAnalyticsBaseComponent();
};

FORCEINLINE uint32 GetTypeHash(const UChainsawAnalyticsBaseComponent) { return 0; }
