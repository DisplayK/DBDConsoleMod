#pragma once

#include "CoreMinimal.h"
#include "SingleModifierCondition.h"
#include "LingeringModifierCondition.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class COMPETENCE_API ULingeringModifierCondition : public USingleModifierCondition
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void OnTimerEnd();

public:
	ULingeringModifierCondition();
};

FORCEINLINE uint32 GetTypeHash(const ULingeringModifierCondition) { return 0; }
