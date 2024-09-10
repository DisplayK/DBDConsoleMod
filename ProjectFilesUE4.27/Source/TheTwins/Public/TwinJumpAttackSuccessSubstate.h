#pragma once

#include "CoreMinimal.h"
#include "PounceAttackSuccessSubstate.h"
#include "DBDTunableRowHandle.h"
#include "TwinJumpAttackSuccessSubstate.generated.h"

UCLASS()
class UTwinJumpAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _jumpSucceedAttachedCooldownTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _jumpSucceedNotAttachedCooldownTime;

public:
	UTwinJumpAttackSuccessSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UTwinJumpAttackSuccessSubstate) { return 0; }
