#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "NoOneLeftBehind.generated.h"

class UStatusEffect;
class UGameplayModifierContainer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UNoOneLeftBehind : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _movementSpeedPercentage;

	UPROPERTY(EditDefaultsOnly)
	float _movementSpeedDuration;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _modifyHealOtherSpeedEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _modifyUnhookOtherSpeedEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _movementSpeedEffect;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _actionSpeedModifierValuePerLevel;

	UPROPERTY(Transient, Export)
	UStatusEffect* _alertKillerRevealEffect;

private:
	UFUNCTION()
	void Authority_OnExitGatePoweredApplicableChanged(UGameplayModifierContainer* container, bool active);

public:
	UNoOneLeftBehind();
};

FORCEINLINE uint32 GetTypeHash(const UNoOneLeftBehind) { return 0; }
