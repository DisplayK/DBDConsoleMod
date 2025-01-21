#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsNotSightedByAnyCharacter.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UIsNotSightedByAnyCharacter : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

public:
	UIsNotSightedByAnyCharacter();
};

FORCEINLINE uint32 GetTypeHash(const UIsNotSightedByAnyCharacter) { return 0; }
