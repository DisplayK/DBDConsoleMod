#pragma once

#include "CoreMinimal.h"
#include "K30BaseStatusEffectAddon.h"
#include "EGuardHuntEndReason.h"
#include "K30InflictStatusOnEndHuntAddon.generated.h"

class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK30InflictStatusOnEndHuntAddon : public UK30BaseStatusEffectAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TArray<EGuardHuntEndReason> _huntEndReasonsToApplyEffect;

protected:
	UFUNCTION()
	void Authority_OnEndHunt(ADBDPlayer* player, EGuardHuntEndReason huntEndReason);

public:
	UK30InflictStatusOnEndHuntAddon();
};

FORCEINLINE uint32 GetTypeHash(const UK30InflictStatusOnEndHuntAddon) { return 0; }
