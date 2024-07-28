#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "EK25TeleportLocationStatus.h"
#include "K25KillerTeleportationPositionFinderComponent.generated.h"

class AEscapeDoor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UK25KillerTeleportationPositionFinderComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _rayCastZOffet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _rayCastLength;

	UPROPERTY(EditDefaultsOnly)
	float _killerInRangeMinimumDistanceCheck;

	UPROPERTY(EditDefaultsOnly)
	float _killerInRangeMaxRangePercentage;

	UPROPERTY(EditDefaultsOnly)
	float _deltaHeightThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDBDTunableRowHandle _minDistanceFromLamentConfiguration;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDBDTunableRowHandle _maxDistanceFromLamentConfiguration;

private:
	UPROPERTY(EditAnywhere)
	float _timeBetweenFailsafeChecks;

	UPROPERTY(Transient)
	EK25TeleportLocationStatus _teleportLocationStatus;

	UPROPERTY(Transient)
	FVector _bestTeleportLocation;

	UPROPERTY(Transient)
	TArray<AEscapeDoor*> _escapeDoors;

public:
	UK25KillerTeleportationPositionFinderComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK25KillerTeleportationPositionFinderComponent) { return 0; }
