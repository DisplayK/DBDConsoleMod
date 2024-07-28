#pragma once

#include "CoreMinimal.h"
#include "PossessNegationEffectComponent.h"
#include "TwinPossessNegationEffectComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UTwinPossessNegationEffectComponent : public UPossessNegationEffectComponent
{
	GENERATED_BODY()

public:
	UTwinPossessNegationEffectComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTwinPossessNegationEffectComponent) { return 0; }
