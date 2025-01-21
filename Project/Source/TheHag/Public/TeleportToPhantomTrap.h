#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "InteractionDefinition.h"
#include "TeleportToPhantomTrap.generated.h"

class ASlasherPlayer;
class ADBDPlayer;
class APhantomTrap;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEHAG_API UTeleportToPhantomTrap : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _teleportMaxDistance;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _slowdownTimeAfterTeleport;

	UPROPERTY(EditDefaultsOnly)
	FName _hagSlowdownAfterTeleportEffectID;

protected:
	UFUNCTION(BlueprintPure)
	float GetTeleportMaxDistance(ASlasherPlayer* slasher) const;

	UFUNCTION(BlueprintPure)
	APhantomTrap* GetPhantomTrap() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTeleport(ASlasherPlayer* slasher, APhantomTrap* trap);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionFinished(ADBDPlayer* slasher, bool hasInteractionStarted);

	UFUNCTION(BlueprintImplementableEvent)
	void BP_OnTeleport(ASlasherPlayer* slasher, APhantomTrap* trap);

public:
	UTeleportToPhantomTrap();
};

FORCEINLINE uint32 GetTypeHash(const UTeleportToPhantomTrap) { return 0; }
