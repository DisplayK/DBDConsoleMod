#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsOwningPlayerLastSurvivor.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsOwningPlayerLastSurvivor : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

public:
	UIsOwningPlayerLastSurvivor();
};

FORCEINLINE uint32 GetTypeHash(const UIsOwningPlayerLastSurvivor) { return 0; }
