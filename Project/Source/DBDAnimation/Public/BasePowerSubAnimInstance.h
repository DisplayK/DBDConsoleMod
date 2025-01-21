#pragma once

#include "CoreMinimal.h"
#include "BaseKillerAnimInstance.h"
#include "BasePowerSubAnimInstance.generated.h"

UCLASS(NonTransient)
class DBDANIMATION_API UBasePowerSubAnimInstance : public UBaseKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isUsingPower;

public:
	UBasePowerSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UBasePowerSubAnimInstance) { return 0; }
