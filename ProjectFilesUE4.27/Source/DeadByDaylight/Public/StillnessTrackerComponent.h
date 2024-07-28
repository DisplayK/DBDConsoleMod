#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StillnessTrackerComponent.generated.h"

class ADBDPlayer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UStillnessTrackerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpeedThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DistanceThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DistanceDecay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DecayWhileMoving;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StillnessThreshhold;

	UPROPERTY(EditAnywhere)
	float StillnessTimerLimit;

	UPROPERTY(EditAnywhere)
	float DecaySpeedMultiplier;

protected:
	UPROPERTY(Transient)
	TWeakObjectPtr<ADBDPlayer> _trackedPlayer;

private:
	UFUNCTION()
	void StartTracking();

public:
	UStillnessTrackerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UStillnessTrackerComponent) { return 0; }
