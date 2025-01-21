#pragma once

#include "CoreMinimal.h"
#include "SleepingAnimInstance.h"
#include "SupplyCrateAnimInstance.generated.h"

class ASupplyCrateInteractable;
class ADBDPlayer;

UCLASS(NonTransient)
class USupplyCrateAnimInstance : public USleepingAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	ASupplyCrateInteractable* _owningSupplyCrate;

	UPROPERTY(BlueprintReadOnly)
	bool _isOpen;

	UPROPERTY(BlueprintReadOnly)
	bool _isBeingPriedOpen;

	UPROPERTY(BlueprintReadOnly)
	bool _isAutoClosing;

private:
	UFUNCTION()
	void OnBeingPriedOpenStopped();

	UFUNCTION()
	void OnBeingPriedOpenStarted(ADBDPlayer* player);

public:
	USupplyCrateAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const USupplyCrateAnimInstance) { return 0; }
