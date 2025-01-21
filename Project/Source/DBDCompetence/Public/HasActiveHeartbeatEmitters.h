#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "HasActiveHeartbeatEmitters.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UHasActiveHeartbeatEmitters : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

public:
	UHasActiveHeartbeatEmitters();
};

FORCEINLINE uint32 GetTypeHash(const UHasActiveHeartbeatEmitters) { return 0; }
