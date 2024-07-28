#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "HillbillyAnimInstance.generated.h"

UCLASS(NonTransient)
class UHillbillyAnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

public:
	UHillbillyAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UHillbillyAnimInstance) { return 0; }
