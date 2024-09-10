#pragma once

#include "CoreMinimal.h"
#include "PresentationPowerFadeComponent.h"
#include "K28PowerChargePresentationPowerFadeComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK28PowerChargePresentationPowerFadeComponent : public UPresentationPowerFadeComponent
{
	GENERATED_BODY()

public:
	UK28PowerChargePresentationPowerFadeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK28PowerChargePresentationPowerFadeComponent) { return 0; }
