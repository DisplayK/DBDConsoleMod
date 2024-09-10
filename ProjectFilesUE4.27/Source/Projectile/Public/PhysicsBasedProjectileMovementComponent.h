#pragma once

#include "CoreMinimal.h"
#include "DBDProjectileMovementComponent.h"
#include "PhysicsBasedProjectileMovementComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class PROJECTILE_API UPhysicsBasedProjectileMovementComponent : public UDBDProjectileMovementComponent
{
	GENERATED_BODY()

public:
	UPhysicsBasedProjectileMovementComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPhysicsBasedProjectileMovementComponent) { return 0; }
