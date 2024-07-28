#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "K26AnimInstance.generated.h"

UCLASS(NonTransient)
class UK26AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_DELEGATE_OneParam(FOnMaxAmmoSetDelegate, const int32, maxAmmo);

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isUsingPower;

public:
	UK26AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK26AnimInstance) { return 0; }
