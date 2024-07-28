#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "K30P02ScreamStatusEffect.generated.h"

class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK30P02ScreamStatusEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TSubclassOf<UStatusEffect> _screamingPlayerRevealAuraEffectClass;

	UPROPERTY(EditAnywhere)
	FGameplayTagContainer _screamPreventingTags;

protected:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_MakePlayerScream(const float screamRevealDuration);

public:
	UFUNCTION(BlueprintPure)
	bool IsTimerPaused() const;

	UFUNCTION(BlueprintPure)
	bool IsTimerActive() const;

	UFUNCTION(BlueprintPure)
	float GetTimerRemainingTime() const;

	UFUNCTION(BlueprintPure)
	float GetTimerElapsedTime() const;

	UFUNCTION(BlueprintPure)
	float GetTimerDuration() const;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void BP_MakeSurvivorScream(ADBDPlayer* survivorPlayer, const float screamRevealDuration);

public:
	UK30P02ScreamStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UK30P02ScreamStatusEffect) { return 0; }
