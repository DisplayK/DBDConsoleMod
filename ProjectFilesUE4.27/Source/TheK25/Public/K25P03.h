#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameEventData.h"
#include "GameplayTagContainer.h"
#include "K25P03.generated.h"

class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK25P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	int32 _numberOfSurvivorsWaitingForDamageStateChange;

	UPROPERTY(EditDefaultsOnly)
	float _state2ActionSpeedDebuffPercentage;

private:
	UFUNCTION()
	void OnSurvivorRemoved(ACamperPlayer* survivor);

	UFUNCTION()
	void OnDamageStateChanged(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

	UFUNCTION()
	void OnCamperUnhookedFromScourgeHook(const FGameEventData& gameEventData);

public:
	UK25P03();
};

FORCEINLINE uint32 GetTypeHash(const UK25P03) { return 0; }
