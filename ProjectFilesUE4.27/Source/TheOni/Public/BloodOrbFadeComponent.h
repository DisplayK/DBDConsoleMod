#pragma once

#include "CoreMinimal.h"
#include "FadeComponent.h"
#include "BloodOrbFadeComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UBloodOrbFadeComponent : public UFadeComponent
{
	GENERATED_BODY()

public:
	UBloodOrbFadeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBloodOrbFadeComponent) { return 0; }
