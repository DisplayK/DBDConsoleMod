#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ChestAnimInstance.generated.h"

class ADBDPlayer;
class ASearchable;
class UInteractionDefinition;

UCLASS(NonTransient)
class DBDANIMATION_API UChestAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	ASearchable* _owningChest;

	UPROPERTY(BlueprintReadOnly)
	bool _isOpen;

	UPROPERTY(BlueprintReadOnly)
	bool _isBeingPriedOpen;

private:
	UPROPERTY(Transient, Export)
	UInteractionDefinition* _openChestInteraction;

private:
	UFUNCTION()
	void OnSearchedChanged(bool searched);

	UFUNCTION()
	void OnBeingPriedOpenStopped();

	UFUNCTION()
	void OnBeingPriedOpenStarted(ADBDPlayer* player);

public:
	UChestAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UChestAnimInstance) { return 0; }
