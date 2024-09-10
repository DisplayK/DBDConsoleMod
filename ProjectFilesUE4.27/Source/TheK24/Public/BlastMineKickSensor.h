#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "BlastMineKickSensor.generated.h"

class UChargeableComponent;
class ASlasherPlayer;
class AGenerator;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK24_API UBlastMineKickSensor : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FFloatRange _kickChargeTriggerRange;

private:
	UPROPERTY(Transient)
	ASlasherPlayer* _kickingKiller;

	UPROPERTY(Transient, Export)
	UChargeableComponent* _kickGeneratorChargeable;

	UPROPERTY(Transient)
	AGenerator* _generator;

private:
	UFUNCTION()
	void Authority_OnKickChargeablePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);

public:
	UBlastMineKickSensor();
};

FORCEINLINE uint32 GetTypeHash(const UBlastMineKickSensor) { return 0; }
