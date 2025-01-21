#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "DemogorgonAnimInstance.generated.h"

UCLASS(NonTransient)
class UDemogorgonAnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _leftArmPushback;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _rightArmPushback;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isDemogorgonCharging;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _demogorgonChargingPercent;

public:
	UDemogorgonAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UDemogorgonAnimInstance) { return 0; }
