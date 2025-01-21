#pragma once

#include "CoreMinimal.h"
#include "K25ProjectileReplicationComponent.h"
#include "LaunchInfo.h"
#include "K25UncontrolledProjectileReplicationComponent.generated.h"

class AK25UncontrolledProjectile;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEK25_API UK25UncontrolledProjectileReplicationComponent : public UK25ProjectileReplicationComponent
{
	GENERATED_BODY()

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_LaunchProjectile(AK25UncontrolledProjectile* projectile, FLaunchInfo launchInfo);

public:
	UK25UncontrolledProjectileReplicationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK25UncontrolledProjectileReplicationComponent) { return 0; }
