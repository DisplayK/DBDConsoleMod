#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "SpineChillPerk.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class USpineChillPerk : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _spineChillEffectClass;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _actionSpeed;

	UPROPERTY(EditDefaultsOnly)
	float _lingerDuration;

	UPROPERTY(EditDefaultsOnly)
	float _range;

	UPROPERTY(EditDefaultsOnly)
	float _precisionAngleDegrees;

	UPROPERTY(ReplicatedUsing=OnRep_IsInRange)
	bool _isInRange;

private:
	UFUNCTION()
	void OnRep_IsInRange();

public:
	UFUNCTION(BlueprintPure)
	bool IsLookingTowards();

	UFUNCTION(BlueprintPure)
	bool IsInRange();

	UFUNCTION(BlueprintPure)
	bool HasLineOfSight();

	UFUNCTION(BlueprintPure)
	float GetRange();

	UFUNCTION(BlueprintPure)
	float GetLingerDuration();

	UFUNCTION(BlueprintPure)
	float GetActionSpeed(int32 perkLevel);

private:
	UFUNCTION()
	void Authority_OnIsLookingTowardsChanged(const bool isLookingTowards);

	UFUNCTION()
	void Authority_OnIsInLineOfSightChanged(const bool isInLineOfSight);

	UFUNCTION()
	void Authority_OnInRangeChanged(const bool inRange);

public:
	UFUNCTION(BlueprintPure)
	bool AreTriggersMet();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USpineChillPerk();
};

FORCEINLINE uint32 GetTypeHash(const USpineChillPerk) { return 0; }
