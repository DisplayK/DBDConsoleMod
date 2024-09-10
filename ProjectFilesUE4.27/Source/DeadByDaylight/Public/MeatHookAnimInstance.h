#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MeatHookAnimInstance.generated.h"

UCLASS(NonTransient)
class DEADBYDAYLIGHT_API UMeatHookAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool IsBroken;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float Yaw;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool IsSurvivorStruggling;

public:
	UMeatHookAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UMeatHookAnimInstance) { return 0; }
