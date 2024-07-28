#pragma once

#include "CoreMinimal.h"
#include "InjectSerumInteraction.h"
#include "InjectSerumSelf.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UInjectSerumSelf : public UInjectSerumInteraction
{
	GENERATED_BODY()

public:
	UInjectSerumSelf();
};

FORCEINLINE uint32 GetTypeHash(const UInjectSerumSelf) { return 0; }
