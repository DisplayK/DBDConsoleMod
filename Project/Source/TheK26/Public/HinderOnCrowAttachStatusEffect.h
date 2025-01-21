#pragma once

#include "CoreMinimal.h"
#include "BaseLingeringStatusEffect.h"
#include "TunableStat.h"
#include "GameplayTagContainer.h"
#include "HinderOnCrowAttachStatusEffect.generated.h"

class ASlasherPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UHinderOnCrowAttachStatusEffect : public UBaseLingeringStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _onCrowAttachStateTag;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _hinderOnIdleLingerTime;

public:
	UFUNCTION()
	void OnKillerSet(ASlasherPlayer* killer);

public:
	UHinderOnCrowAttachStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UHinderOnCrowAttachStatusEffect) { return 0; }
