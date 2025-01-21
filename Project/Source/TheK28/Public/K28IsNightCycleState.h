#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "EK28NightCycleState.h"
#include "K28IsNightCycleState.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK28IsNightCycleState : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	EK28NightCycleState _nightCycleState;

private:
	UFUNCTION()
	void OnLevelReadyToPlay();

public:
	UK28IsNightCycleState();
};

FORCEINLINE uint32 GetTypeHash(const UK28IsNightCycleState) { return 0; }
