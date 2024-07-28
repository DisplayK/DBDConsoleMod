#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "ESkillCheckCustomType.h"
#include "Solidarity.generated.h"

class ADBDPlayer;
class UChargeableComponent;
class AActor;
class UChargeableInteractionDefinition;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API USolidarity : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	bool _allowMedkit;

	UPROPERTY(Transient, Export)
	UChargeableComponent* _healerHPSlot;

	UPROPERTY(Transient, Export)
	UChargeableComponent* _targetHPSlot;

	UPROPERTY(Transient, Export)
	UChargeableInteractionDefinition* _healOtherInteraction;

private:
	UFUNCTION()
	void Authority_OnSkillCheckResponse(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, bool hadInput, ESkillCheckCustomType type, float chargeChange);

	UFUNCTION()
	void Authority_OnHealthChargeApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime);

public:
	USolidarity();
};

FORCEINLINE uint32 GetTypeHash(const USolidarity) { return 0; }
