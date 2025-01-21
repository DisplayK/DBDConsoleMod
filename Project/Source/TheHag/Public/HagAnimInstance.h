#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "HagAnimInstance.generated.h"

UCLASS(NonTransient)
class UHagAnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

public:
	UHagAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UHagAnimInstance) { return 0; }
