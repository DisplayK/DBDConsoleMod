#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsHexCursed.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsHexCursed : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

public:
	UIsHexCursed();
};

FORCEINLINE uint32 GetTypeHash(const UIsHexCursed) { return 0; }
