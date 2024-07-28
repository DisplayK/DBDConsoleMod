#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "HarpoonRifleAnimInstance.generated.h"

class ARifleChain;

UCLASS(NonTransient)
class UHarpoonRifleAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ARifleChain* _chain;

	UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float _chainUnwindingSpeed;

public:
	UHarpoonRifleAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UHarpoonRifleAnimInstance) { return 0; }
