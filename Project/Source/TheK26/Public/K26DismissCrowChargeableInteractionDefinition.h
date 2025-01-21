#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "TunableStat.h"
#include "ECamperDamageState.h"
#include "K26DismissCrowChargeableInteractionDefinition.generated.h"

class UK26PowerStatusHandlerComponent;
class UChargeableComponent;
class ASlasherPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK26DismissCrowChargeableInteractionDefinition : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FTunableStat _chargeTime;

	UPROPERTY(meta=(BindWidgetOptional))
	UK26PowerStatusHandlerComponent* _k26PowerStatusHandlerComponent;

private:
	UPROPERTY(Transient)
	bool _isLevelReadyToPlay;

protected:
	UFUNCTION()
	void OnLevelReadyToPlay();

private:
	UFUNCTION()
	void OnKillerSet(ASlasherPlayer* killer, UChargeableComponent* chargeableComponent);

protected:
	UFUNCTION()
	void OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);

public:
	UK26DismissCrowChargeableInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UK26DismissCrowChargeableInteractionDefinition) { return 0; }
