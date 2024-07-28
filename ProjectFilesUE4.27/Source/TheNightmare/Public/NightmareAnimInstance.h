#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "NightmareAnimInstance.generated.h"

UCLASS(NonTransient)
class UNightmareAnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

public:
	UNightmareAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UNightmareAnimInstance) { return 0; }
