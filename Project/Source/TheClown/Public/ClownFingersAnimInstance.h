#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ClownFingersAnimInstance.generated.h"

UCLASS(NonTransient)
class UClownFingersAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isObservedCharacterSlasher;

public:
	UClownFingersAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UClownFingersAnimInstance) { return 0; }
