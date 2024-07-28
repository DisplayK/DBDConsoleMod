#pragma once

#include "CoreMinimal.h"
#include "K28LockerCluster.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "K28TeleportationStrategyComponent.generated.h"

class UK28LockerComponent;
class AK28TeleportationIndicator;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK28TeleportationStrategyComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Replicated)
	TArray<FK28LockerCluster> _lockerClusters;

	UPROPERTY(EditDefaultsOnly)
	float _minMovementSquaredDistanceForBestClusterRecalculation;

	UPROPERTY(EditDefaultsOnly)
	float _minDeltaSquaredDistanceForBestTargetRecalculation;

	UPROPERTY(EditDefaultsOnly)
	float _minDeltaDotProductForBestTargetRecalculation;

	UPROPERTY(EditDefaultsOnly)
	float _minDotProductToBeEligibleForBestCluster;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK28LockerComponent> _lockerComponentClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AK28TeleportationIndicator> _teleportIndicatorClass;

	UPROPERTY(Replicated, Transient)
	AK28TeleportationIndicator* _teleportIndicator;

private:
	UFUNCTION(Server, Reliable)
	void Server_UpdateBestTeleportTarget(int32 bestTeleportTargetID);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_UpdateBestTeleportTarget(int32 bestTeleportTargetID);

	UFUNCTION()
	void Authority_OnLevelReadyToPlay();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK28TeleportationStrategyComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK28TeleportationStrategyComponent) { return 0; }
