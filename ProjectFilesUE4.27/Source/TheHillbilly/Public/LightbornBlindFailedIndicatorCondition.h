#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "LightbornBlindFailedIndicatorCondition.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEHILLBILLY_API ULightbornBlindFailedIndicatorCondition : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	float _conditionReevaluationTimerDurationAfterFailedBlind;

public:
	ULightbornBlindFailedIndicatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const ULightbornBlindFailedIndicatorCondition) { return 0; }
