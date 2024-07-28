#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "ECamperDamageState.h"
#include "ECamperImmobilizeState.h"
#include "ObjectOfObsession.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class THESHAPE_API UObjectOfObsession : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _revealTimeIntervals;

	UPROPERTY(EditDefaultsOnly)
	float _revealTimeDuration;

	UPROPERTY(EditDefaultsOnly)
	float _actionSpeedBonus;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _increaseObsessionChanceEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _revealToKillerStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _objectOfObsessionActionSpeedEffect;

private:
	UFUNCTION()
	void Authority_OnPlayerImmobilizeStateChanged(const ECamperImmobilizeState oldImmobilizeState, const ECamperImmobilizeState newImmobilizeState);

	UFUNCTION()
	void Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);

public:
	UObjectOfObsession();
};

FORCEINLINE uint32 GetTypeHash(const UObjectOfObsession) { return 0; }
