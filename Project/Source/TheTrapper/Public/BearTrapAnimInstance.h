#pragma once

#include "CoreMinimal.h"
#include "SleepingAnimInstance.h"
#include "BearTrapAnimInstance.generated.h"

UCLASS(NonTransient)
class THETRAPPER_API UBearTrapAnimInstance : public USleepingAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isBeingCollected;

	UPROPERTY(BlueprintReadOnly)
	bool _containsSurvivor;

	UPROPERTY(BlueprintReadOnly)
	bool _isTrapSet;

	UPROPERTY(BlueprintReadOnly)
	bool _wasJustDisarmed;

public:
	UFUNCTION(BlueprintCallable)
	void SetWasJustDisarmed(bool wasJustDisarmed);

	UFUNCTION(BlueprintCallable)
	void SetIsTrapSet(bool isTrapSet);

	UFUNCTION(BlueprintCallable)
	void SetIsBeingCollected(bool isBeingCollected);

	UFUNCTION(BlueprintCallable)
	void SetContainsSurvivor(bool containsSurvivor);

public:
	UBearTrapAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UBearTrapAnimInstance) { return 0; }
