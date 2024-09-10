#pragma once

#include "CoreMinimal.h"
#include "EndGameComponent.h"
#include "TutorialEndGameComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UTutorialEndGameComponent : public UEndGameComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _timerMaxCompletionPercentage;

public:
	UFUNCTION(BlueprintCallable)
	void SetTimerMaxCompletionPercentage(const float& percentage);

public:
	UTutorialEndGameComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTutorialEndGameComponent) { return 0; }
