#pragma once

#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "ExecutionerTormentAttack.generated.h"

class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEEXECUTIONER_API UExecutionerTormentAttack : public UPounceAttack
{
	GENERATED_BODY()

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_TormentTryHitTargetNotInCoolDown(ADBDPlayer* target);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_TormentHitTarget(ADBDPlayer* target, bool hitCosmeticOnly);

public:
	UExecutionerTormentAttack();
};

FORCEINLINE uint32 GetTypeHash(const UExecutionerTormentAttack) { return 0; }
