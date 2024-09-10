#pragma once

#include "CoreMinimal.h"
#include "InjectSerumInteraction.h"
#include "InjectSerumOther.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UInjectSerumOther : public UInjectSerumInteraction
{
	GENERATED_BODY()

public:
	UInjectSerumOther();
};

FORCEINLINE uint32 GetTypeHash(const UInjectSerumOther) { return 0; }
