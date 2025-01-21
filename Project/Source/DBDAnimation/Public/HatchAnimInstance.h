#pragma once

#include "CoreMinimal.h"
#include "SleepingAnimInstance.h"
#include "HatchAnimInstance.generated.h"

UCLASS(NonTransient)
class DBDANIMATION_API UHatchAnimInstance : public USleepingAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isOpen;

public:
	UHatchAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UHatchAnimInstance) { return 0; }
