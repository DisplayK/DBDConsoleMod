#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "OnEventBaseAddon.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UOnEventBaseAddon : public UItemAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _eventToListenTo;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnEventFired(const FGameEventData& gameEventData);

public:
	UOnEventBaseAddon();
};

FORCEINLINE uint32 GetTypeHash(const UOnEventBaseAddon) { return 0; }
