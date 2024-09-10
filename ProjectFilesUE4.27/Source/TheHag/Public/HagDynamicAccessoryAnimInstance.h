#pragma once

#include "CoreMinimal.h"
#include "DynamicAccessoryAnimInstance.h"
#include "HagDynamicAccessoryAnimInstance.generated.h"

UCLASS(NonTransient)
class THEHAG_API UHagDynamicAccessoryAnimInstance : public UDynamicAccessoryAnimInstance
{
	GENERATED_BODY()

public:
	UHagDynamicAccessoryAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UHagDynamicAccessoryAnimInstance) { return 0; }
