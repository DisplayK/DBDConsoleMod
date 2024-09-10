#pragma once

#include "CoreMinimal.h"
#include "PresentationPowerFadeComponent.h"
#include "K30PresentationPowerFadeComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK30PresentationPowerFadeComponent : public UPresentationPowerFadeComponent
{
	GENERATED_BODY()

public:
	UK30PresentationPowerFadeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK30PresentationPowerFadeComponent) { return 0; }
