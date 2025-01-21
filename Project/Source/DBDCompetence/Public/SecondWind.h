#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "ESecondWindState.h"
#include "Templates/SubclassOf.h"
#include "SecondWind.generated.h"

class UStatusEffect;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API USecondWind : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(Replicated)
	ESecondWindState _currentState;

	UPROPERTY(Replicated)
	float _amountHealed;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _numberOfHealStateToHealToActivate;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _durationOfHeal;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _brokenStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	bool _applyBrokenEffect;

private:
	UFUNCTION()
	void Authority_OnHealProgress(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USecondWind();
};

FORCEINLINE uint32 GetTypeHash(const USecondWind) { return 0; }
