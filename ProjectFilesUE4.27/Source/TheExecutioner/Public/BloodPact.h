#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "BloodPact.generated.h"

class ADBDPlayer;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UBloodPact : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	bool _fullHealthStateOnly;

	UPROPERTY(EditDefaultsOnly)
	float _hasteEffectRange;

	UPROPERTY(EditDefaultsOnly)
	float _hasteEffectMovementSpeedIncrease;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _bloodPactRevealEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _bloodPactHasteEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _increaseObsessionChanceEffect;

	UPROPERTY(Transient, Export)
	UStatusEffect* _ownerStatusEffect;

	UPROPERTY(Transient, Export)
	UStatusEffect* _obsessionStatusEffect;

	UPROPERTY(Transient, Export)
	UStatusEffect* _ownerHasteStatusEffect;

	UPROPERTY(Transient, Export)
	UStatusEffect* _otherPlayerHasteStatusEffect;

	UPROPERTY(Transient)
	ADBDPlayer* _otherPlayer;

private:
	UFUNCTION()
	void Authority_OnInRangeChanged(const bool inRange);

public:
	UBloodPact();
};

FORCEINLINE uint32 GetTypeHash(const UBloodPact) { return 0; }
