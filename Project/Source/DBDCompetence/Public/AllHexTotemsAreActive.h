#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "AllHexTotemsAreActive.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UAllHexTotemsAreActive : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

public:
	UAllHexTotemsAreActive();
};

FORCEINLINE uint32 GetTypeHash(const UAllHexTotemsAreActive) { return 0; }
