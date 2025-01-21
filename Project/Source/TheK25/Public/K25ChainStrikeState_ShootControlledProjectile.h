#pragma once

#include "CoreMinimal.h"
#include "K25ChainStrikeBaseState.h"
#include "K25ChainStrikeState_ShootControlledProjectile.generated.h"

UCLASS(Abstract)
class UK25ChainStrikeState_ShootControlledProjectile : public UK25ChainStrikeBaseState
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	float _minimumThrottleTimeForInputServerCall;

	UPROPERTY(EditAnywhere)
	float _inputResetSpeed;

public:
	UK25ChainStrikeState_ShootControlledProjectile();
};

FORCEINLINE uint32 GetTypeHash(const UK25ChainStrikeState_ShootControlledProjectile) { return 0; }
