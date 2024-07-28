#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "ECamperDamageState.h"
#include "K25SurvivorChainTargetterComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UK25SurvivorChainTargetterComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDBDTunableRowHandle _timeBetweenQueuedChainsLaunch;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _timeBetweenQueuedChainsLaunchAfterPreviousFailedAttempt;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDBDTunableRowHandle _minimumSpawnDistance;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDBDTunableRowHandle _maximumSpawnDistance;

	UPROPERTY(EditAnywhere)
	float _sphereCastRadius;

	UPROPERTY(EditAnywhere)
	int32 _numberOfPositionFindingTries;

	UPROPERTY(EditAnywhere)
	int32 _maxNumberOfChainRetries;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DebugPositionFind(const FVector& startSweepPosition, const FVector& endSweepPosition, bool hasFoundPosition, const FVector& foundPosition, bool hasFoundCollision, const FVector& collisionPosition) const;

	UFUNCTION()
	void Authority_OnSurvivorHealthStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);

public:
	UK25SurvivorChainTargetterComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK25SurvivorChainTargetterComponent) { return 0; }
