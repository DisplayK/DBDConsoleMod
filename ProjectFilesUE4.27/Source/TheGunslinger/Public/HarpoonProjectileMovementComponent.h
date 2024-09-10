#pragma once

#include "CoreMinimal.h"
#include "PhysicsBasedProjectileMovementComponent.h"
#include "DBDTunableRowHandle.h"
#include "HarpoonProjectileMovementComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEGUNSLINGER_API UHarpoonProjectileMovementComponent : public UPhysicsBasedProjectileMovementComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxTravelDistance;

public:
	UHarpoonProjectileMovementComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHarpoonProjectileMovementComponent) { return 0; }
