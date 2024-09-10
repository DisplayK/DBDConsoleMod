#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StateSpeedCurveApplier.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UStateSpeedCurveApplier : public UActorComponent
{
	GENERATED_BODY()

public:
	UStateSpeedCurveApplier();
};

FORCEINLINE uint32 GetTypeHash(const UStateSpeedCurveApplier) { return 0; }
