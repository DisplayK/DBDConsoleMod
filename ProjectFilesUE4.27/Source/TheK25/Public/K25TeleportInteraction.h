#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "UObject/NoExportTypes.h"
#include "DBDTunableRowHandle.h"
#include "K25TeleportInteraction.generated.h"

class ASlasherPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK25TeleportInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	int32 _maxNumberLocationQueriesPerTick;

	UPROPERTY(EditAnywhere)
	float _timeSensingLamentConfigurationAfterInteractionEnded;

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _slowdownAfterTeleportDuration;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_TeleportKillerToTargetPosition(ASlasherPlayer* killer, FVector location, FRotator rotation);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_InitializeHusk(FVector location, FRotator rotation);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TeleportStartEffects(ASlasherPlayer* killer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TeleportEndEffects(ASlasherPlayer* killer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TeleportAbortedEffects(ASlasherPlayer* killer);

public:
	UK25TeleportInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK25TeleportInteraction) { return 0; }
