#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsActivationTimerActive.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UIsActivationTimerActive : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

public:
	UIsActivationTimerActive();
};

FORCEINLINE uint32 GetTypeHash(const UIsActivationTimerActive) { return 0; }
