#pragma once

#include "CoreMinimal.h"
#include "SleepingAnimInstance.h"
#include "LockerAnimInstance.generated.h"

UCLASS(NonTransient)
class DEADBYDAYLIGHT_API ULockerAnimInstance : public USleepingAnimInstance
{
	GENERATED_BODY()

public:
	ULockerAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const ULockerAnimInstance) { return 0; }
