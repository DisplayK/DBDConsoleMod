#pragma once

#include "CoreMinimal.h"
#include "EGuardHuntEndReason.h"
#include "GameEventData.h"
#include "K30BaseStatusEffectAddon.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "K30Addon20.generated.h"

class AWindow;
class UStatusEffect;
class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK30Addon20 : public UK30BaseStatusEffectAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TArray<AWindow*> _blockedWindows;

	UPROPERTY(Transient)
	ADBDPlayer* _huntedSurvivor;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _gateBlockerEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _trailPassThroughWindowBlockTime;

private:
	UFUNCTION()
	void Authority_OnTrailCameraGoThroughWindow(AWindow* window);

	UFUNCTION()
	void Authority_OnStartHunt(ADBDPlayer* player);

	UFUNCTION()
	void Authority_OnHuntedSurvivorVault(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_OnEndHunt(ADBDPlayer* player, EGuardHuntEndReason huntEndReason);

public:
	UK30Addon20();
};

FORCEINLINE uint32 GetTypeHash(const UK30Addon20) { return 0; }
