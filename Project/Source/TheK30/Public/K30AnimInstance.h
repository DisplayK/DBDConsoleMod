#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "K30AnimInstance.generated.h"

UCLASS(NonTransient)
class UK30AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isChargingPower;

	UPROPERTY(BlueprintReadOnly)
	bool _isSnapping;

	UPROPERTY(BlueprintReadOnly)
	bool _isDrawingPath;

public:
	UK30AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK30AnimInstance) { return 0; }
