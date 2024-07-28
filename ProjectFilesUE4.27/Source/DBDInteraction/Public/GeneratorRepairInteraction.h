#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "GeneratorRepairInteraction.generated.h"

class ADBDPlayer;
class AGenerator;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UGeneratorRepairInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	FDBDTunableRowHandle _penaltyPerRepairPlayerCount;

public:
	UFUNCTION(BlueprintCallable)
	void SetIsObstructed(bool obstructed);

	UFUNCTION(BlueprintPure)
	bool IsObstructed();

	UFUNCTION(BlueprintPure)
	bool IsInteractionPossibleInternal(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	bool IsBeingRepaired();

protected:
	UFUNCTION(BlueprintPure)
	AGenerator* GetOwningGenerator() const;

public:
	UFUNCTION(BlueprintPure)
	float GetInteractionChargeSpeedMultiplier_Implementation(const ADBDPlayer* character) const;

public:
	UGeneratorRepairInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UGeneratorRepairInteraction) { return 0; }
