#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "BlinkIndicatorController.generated.h"

class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class THENURSE_API UBlinkIndicatorController : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> _indicatorClass;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _activationFlag;

	UPROPERTY(EditDefaultsOnly)
	float _indicatorMinimumVelocity;

	UPROPERTY(EditDefaultsOnly)
	float _indicatorVelocityEasingFactor;

	UPROPERTY(Transient)
	AActor* _indicator;

public:
	UBlinkIndicatorController();
};

FORCEINLINE uint32 GetTypeHash(const UBlinkIndicatorController) { return 0; }
