#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "PossessPlayer.generated.h"

class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UPossessPlayer : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _possessThePlayerMaxCharge;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPossessStart(ADBDPlayer* player);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPossessCancelled(ADBDPlayer* player);

public:
	UPossessPlayer();
};

FORCEINLINE uint32 GetTypeHash(const UPossessPlayer) { return 0; }
