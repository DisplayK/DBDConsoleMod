#pragma once

#include "CoreMinimal.h"
#include "ChainLinkableComponent.h"
#include "KillerChainLinkableComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEGUNSLINGER_API UKillerChainLinkableComponent : public UChainLinkableComponent
{
	GENERATED_BODY()

public:
	UKillerChainLinkableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UKillerChainLinkableComponent) { return 0; }
