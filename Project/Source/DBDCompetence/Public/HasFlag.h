#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "GameplayTagContainer.h"
#include "HasFlag.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UHasFlag : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _flag;

public:
	UHasFlag();
};

FORCEINLINE uint32 GetTypeHash(const UHasFlag) { return 0; }
