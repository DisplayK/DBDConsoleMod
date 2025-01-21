#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "SecondaryInteractionProperties.h"
#include "EInputInteractionType.h"
#include "K28TeleportInteraction.generated.h"

class UObject;
class UCurveFloat;
class ASlasherPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK28TeleportInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FSecondaryInteractionProperties _confirmTeleportationProperties;

	UPROPERTY(EditDefaultsOnly)
	FSecondaryInteractionProperties _returnToRemnantProperties;

	UPROPERTY(EditDefaultsOnly)
	EInputInteractionType _triggerTeleportInputType;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _chargingSpeedCurve;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _chargedSpeedCurve;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _cancelledSpeedCurve;

	UPROPERTY(EditDefaultsOnly)
	float _releaseInputMaxTime;

private:
	UFUNCTION(Server, Reliable)
	void Server_RequestTeleportToTarget(ASlasherPlayer* killer, UObject* teleportTarget);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_RefuseTeleportationRequest();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_ConfirmTeleportationRequest(ASlasherPlayer* killer, UObject* teleportTarget);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_CompleteTeleportation();

public:
	UK28TeleportInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK28TeleportInteraction) { return 0; }
