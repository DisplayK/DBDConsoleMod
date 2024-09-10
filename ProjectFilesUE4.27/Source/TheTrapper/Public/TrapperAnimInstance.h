#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "TrapperAnimInstance.generated.h"

UCLASS(NonTransient)
class UTrapperAnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

public:
	UTrapperAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UTrapperAnimInstance) { return 0; }
