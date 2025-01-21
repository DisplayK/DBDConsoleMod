#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "GameplayTagContainer.h"
#include "DidGameEventOccurred.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDidGameEventOccurred : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	FGameplayTag EventTag;

public:
	UDidGameEventOccurred();
};

FORCEINLINE uint32 GetTypeHash(const UDidGameEventOccurred) { return 0; }
