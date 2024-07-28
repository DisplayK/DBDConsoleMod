#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "K28LockAnimInstance.generated.h"

UCLASS(NonTransient)
class UK28LockAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isLockingLock;

public:
	UK28LockAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK28LockAnimInstance) { return 0; }
