#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SurviveTimerScoreEventComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USurviveTimerScoreEventComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void Authority_OnGameStarted();

public:
	USurviveTimerScoreEventComponent();
};

FORCEINLINE uint32 GetTypeHash(const USurviveTimerScoreEventComponent) { return 0; }
