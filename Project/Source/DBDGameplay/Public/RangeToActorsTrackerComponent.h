#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RangeToActorsTrackerComponent.generated.h"

class URangeToActorsTrackerStrategy;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API URangeToActorsTrackerComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, NoClear, Export)
	TArray<URangeToActorsTrackerStrategy*> _rangeTrackers;

private:
	UFUNCTION()
	void OnLevelReadyToPlay();

public:
	URangeToActorsTrackerComponent();
};

FORCEINLINE uint32 GetTypeHash(const URangeToActorsTrackerComponent) { return 0; }
