#pragma once

#include "CoreMinimal.h"
#include "FlashlightTargetFXComponent.h"
#include "BlindFlashlightTargetFXComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UBlindFlashlightTargetFXComponent : public UFlashlightTargetFXComponent
{
	GENERATED_BODY()

public:
	UBlindFlashlightTargetFXComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBlindFlashlightTargetFXComponent) { return 0; }
