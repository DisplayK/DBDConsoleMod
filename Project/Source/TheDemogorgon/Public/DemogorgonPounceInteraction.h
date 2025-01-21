#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DemogorgonPounceInteraction.generated.h"

class ASlasherPlayer;
class UChargedAttackStateComponent;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UDemogorgonPounceInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UChargedAttackStateComponent* _chargedAttackState;

	UPROPERTY(Transient)
	ASlasherPlayer* _owningSlasher;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void TriggerHuntingAudioEvent(bool isHunting);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void TriggerChargeCancelAudioEvent();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnChargedAttackReadyChanged(bool ready);

	UFUNCTION(BlueprintNativeEvent)
	void OnCancelCooldownComplete();

public:
	UDemogorgonPounceInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UDemogorgonPounceInteraction) { return 0; }
