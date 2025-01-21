#pragma once

#include "CoreMinimal.h"
#include "RespawnableTrigger.h"
#include "TimedRespawnableTrigger.generated.h"

class URespawningEventComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class SPECIALEVENTUTILITIES_API UTimedRespawnableTrigger : public URespawnableTrigger
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	URespawningEventComponent* _respawningEventComponent;

public:
	UTimedRespawnableTrigger();
};

FORCEINLINE uint32 GetTypeHash(const UTimedRespawnableTrigger) { return 0; }
