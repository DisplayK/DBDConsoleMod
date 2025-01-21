#pragma once

#include "CoreMinimal.h"
#include "BaseIsPerkUsableCondition.h"
#include "IsOriginatingPerkUsableCondition.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsOriginatingPerkUsableCondition : public UBaseIsPerkUsableCondition
{
	GENERATED_BODY()

public:
	UIsOriginatingPerkUsableCondition();
};

FORCEINLINE uint32 GetTypeHash(const UIsOriginatingPerkUsableCondition) { return 0; }
