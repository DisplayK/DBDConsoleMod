#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "HalloweenCentrifugeAnimInstance.generated.h"

UCLASS(NonTransient)
class UHalloweenCentrifugeAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool _isActive;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float _blendSpaceValue;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _timeToChangeBlendValue;

public:
	UFUNCTION(BlueprintCallable)
	void SetDesiredBlendValue(const float blendValue);

protected:
	UFUNCTION()
	void OnEnergySpawned(int32 previousEnergy, int32 currentEnergy);

	UFUNCTION(BlueprintImplementableEvent)
	void OnBlendValueChanged(const float blendValue);

public:
	UHalloweenCentrifugeAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UHalloweenCentrifugeAnimInstance) { return 0; }
