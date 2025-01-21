#pragma once

#include "CoreMinimal.h"
#include "SingleProjectileProviderComponent.h"
#include "HarpoonProviderComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEGUNSLINGER_API UHarpoonProviderComponent : public USingleProjectileProviderComponent
{
	GENERATED_BODY()

public:
	UHarpoonProviderComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHarpoonProviderComponent) { return 0; }
