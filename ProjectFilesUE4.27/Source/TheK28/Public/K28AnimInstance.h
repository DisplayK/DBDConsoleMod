#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "Templates/SubclassOf.h"
#include "K28AnimInstance.generated.h"

class UK28CustomizationAnimationSelector;

UCLASS(NonTransient)
class UK28AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInLocker;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInChase;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isChargingTeleportation;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _hasTeleportationPowerCharged;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _hasTeleportationBeenCancelled;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _hideHandsInFPV;

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK28CustomizationAnimationSelector> _customizationAnimationSelectorClass;

	UPROPERTY(Transient)
	UK28CustomizationAnimationSelector* _customizationAnimationSelector;

private:
	UFUNCTION()
	void OnCustomizationChanged();

protected:
	UFUNCTION(BlueprintPure)
	TArray<FName> GetCustomAnimationTags() const;

	UFUNCTION(BlueprintPure)
	int32 GetAnimationMappingIndex() const;

	UFUNCTION(BlueprintImplementableEvent)
	void BP_OnCustomizationAnimationMappingIDChanged(int32 animationMappingIndex);

public:
	UK28AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK28AnimInstance) { return 0; }
