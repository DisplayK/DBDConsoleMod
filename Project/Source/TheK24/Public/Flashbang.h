#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Flashbang.generated.h"

class AGenerator;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class UFlashbang : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	AGenerator* _generatorBeingRepaired;

	UPROPERTY(ReplicatedUsing=OnRep_GeneratorsRepairProgress, Transient)
	float _generatorsRepairTargetProgression;

	UPROPERTY(EditDefaultsOnly)
	float _generatorRepairPercentToCraftFlashbang;

private:
	UFUNCTION()
	void OnRep_GeneratorsRepairProgress();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnGeneratorRepairProgressionTargetAchieved();

private:
	UFUNCTION(Client, Unreliable)
	void Client_OnGeneratorRepairProgressionTargetAchieved();

	UFUNCTION()
	void Authority_OnRepairProgressApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UFlashbang();
};

FORCEINLINE uint32 GetTypeHash(const UFlashbang) { return 0; }
