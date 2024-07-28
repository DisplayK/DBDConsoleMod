#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "TheExecutionerAnimInstance.generated.h"

UCLASS(NonTransient)
class UTheExecutionerAnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInTormentMode;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isChargingTormentMode;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isTormentModeAttacking;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _tormentModeVerticalInput;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _tormentModeHorizontalInput;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void NoInputFeedbackCosmetic();

public:
	UTheExecutionerAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UTheExecutionerAnimInstance) { return 0; }
