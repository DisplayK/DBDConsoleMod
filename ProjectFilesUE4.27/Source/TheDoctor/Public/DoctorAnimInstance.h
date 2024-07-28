#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "DoctorAnimInstance.generated.h"

UCLASS(NonTransient)
class UDoctorAnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

public:
	UDoctorAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UDoctorAnimInstance) { return 0; }
