#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractableTransformOptimizer.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UInteractableTransformOptimizer : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	bool _optimizeTransformUpdate;

public:
	UInteractableTransformOptimizer();
};

FORCEINLINE uint32 GetTypeHash(const UInteractableTransformOptimizer) { return 0; }
