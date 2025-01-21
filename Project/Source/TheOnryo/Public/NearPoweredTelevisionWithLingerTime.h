#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "ActorPairQueryHeightRange.h"
#include "NearPoweredTelevisionWithLingerTime.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UNearPoweredTelevisionWithLingerTime : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _distanceFromTelevision;

	UPROPERTY(EditDefaultsOnly)
	float _lingerDuration;

	UPROPERTY(EditDefaultsOnly)
	FActorPairQueryHeightRange _heightRange;

private:
	UFUNCTION()
	void OnLevelReadyToPlay();

public:
	UFUNCTION(BlueprintPure)
	float GetPercentRemainingDuration() const;

public:
	UNearPoweredTelevisionWithLingerTime();
};

FORCEINLINE uint32 GetTypeHash(const UNearPoweredTelevisionWithLingerTime) { return 0; }
