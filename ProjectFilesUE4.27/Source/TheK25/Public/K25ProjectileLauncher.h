#pragma once

#include "CoreMinimal.h"
#include "BaseProjectileLauncher.h"
#include "DBDTunableRowHandle.h"
#include "K25ProjectileLauncher.generated.h"

class AK25ControlledProjectile;

UCLASS(BlueprintType, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK25ProjectileLauncher : public UBaseProjectileLauncher
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDBDTunableRowHandle _controlledProjectileInitialSpeed;

private:
	UPROPERTY(Transient)
	bool _isControlledProjectileRequested;

	UPROPERTY(Transient)
	AK25ControlledProjectile* _controlledProjectile;

public:
	UK25ProjectileLauncher();
};

FORCEINLINE uint32 GetTypeHash(const UK25ProjectileLauncher) { return 0; }
