#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "BoxPlayerOverlapComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UBoxPlayerOverlapComponent : public UBoxComponent
{
	GENERATED_BODY()

public:
	UBoxPlayerOverlapComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBoxPlayerOverlapComponent) { return 0; }
