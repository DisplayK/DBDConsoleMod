#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "ESkillCheckCustomType.h"
#include "DecisiveStrike.generated.h"

class ADBDPlayer;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UDecisiveStrike : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _timeAfterUnhook;

	UPROPERTY(EditDefaultsOnly)
	float _skillCheckDelay;

	UPROPERTY(EditDefaultsOnly)
	float _skillCheckBuffer;

	UPROPERTY(EditDefaultsOnly)
	bool _killerHearsSkillCheckCue;

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _increaseObsessionChanceEffect;

	UPROPERTY(ReplicatedUsing=OnRep_HasBeenAttempted, Transient)
	bool _hasBeenAttempted;

private:
	UFUNCTION()
	void OnUnhookedTimerEnded();

	UFUNCTION()
	void OnSkillCheck(bool hadInput, bool success, bool bonus, ESkillCheckCustomType type, ADBDPlayer* player);

	UFUNCTION()
	void OnRep_HasBeenAttempted();

	UFUNCTION()
	void OnPickUpEnded(ADBDPlayer* picker);

	UFUNCTION()
	void OnOwnerPickedUp(ADBDPlayer* picker);

	UFUNCTION(BlueprintPure)
	float GetDurationAfterUnhook() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDecisiveStrike();
};

FORCEINLINE uint32 GetTypeHash(const UDecisiveStrike) { return 0; }
