#pragma once

#include "CoreMinimal.h"
#include "FirstPersonViewComponent.h"
#include "TwinFirstPersonViewComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THETWINS_API UTwinFirstPersonViewComponent : public UFirstPersonViewComponent
{
	GENERATED_BODY()

public:
	UTwinFirstPersonViewComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTwinFirstPersonViewComponent) { return 0; }
