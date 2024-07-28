#pragma once

#include "CoreMinimal.h"
#include "HalloweenCentrifugeAnimInstance.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "GeneratorCentrifugeAnimInstance.generated.h"

class AGenerator;

UCLASS(NonTransient)
class UGeneratorCentrifugeAnimInstance : public UHalloweenCentrifugeAnimInstance
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void StopRepairing(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void StartRepairing(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnStopRepair(AGenerator* generator);

	UFUNCTION(BlueprintImplementableEvent)
	void OnStartRepair(AGenerator* generator);

public:
	UGeneratorCentrifugeAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UGeneratorCentrifugeAnimInstance) { return 0; }
