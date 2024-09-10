#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LaunchInfo.h"
#include "Engine/NetSerialization.h"
#include "ImpactInfo.h"
#include "BaseProjectileReplicationComponent.generated.h"

class ABaseProjectile;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class PROJECTILE_API UBaseProjectileReplicationComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_TryDetectPlayer(ABaseProjectile* projectile, FImpactInfo impactInfo, const FVector_NetQuantize100 projectileLocation, const FVector_NetQuantize10 projectileRotation, const float targetLocationTimestamp);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SendAuthorityDetectPlayer(ABaseProjectile* projectile, FImpactInfo impactInfo);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnLaunchWithImpact(ABaseProjectile* projectile, FLaunchInfo launchInfo, FImpactInfo impactInfo);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnLaunch(ABaseProjectile* projectile, FLaunchInfo launchInfo);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DetectPlayer(ABaseProjectile* projectile, FImpactInfo impactInfo);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DetectImpact(ABaseProjectile* projectile, FImpactInfo impactInfo);

	UFUNCTION(Client, Reliable)
	void Client_ReceiveDetectPlayerValidation(ABaseProjectile* projectile, bool success);

public:
	UFUNCTION(Client, Reliable)
	void Client_LaunchRefusedByServer(ABaseProjectile* projectile);

public:
	UBaseProjectileReplicationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBaseProjectileReplicationComponent) { return 0; }
