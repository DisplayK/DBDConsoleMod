#pragma once

#include "CoreMinimal.h"
#include "BaseProjectile.h"
#include "PhysicsBasedProjectile.generated.h"

class UPhysicsBasedProjectileMovementComponent;

UCLASS()
class PROJECTILE_API APhysicsBasedProjectile : public ABaseProjectile
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UPhysicsBasedProjectileMovementComponent* Movement;

public:
	APhysicsBasedProjectile();
};

FORCEINLINE uint32 GetTypeHash(const APhysicsBasedProjectile) { return 0; }
