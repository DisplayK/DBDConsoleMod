#pragma once

#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "K23PowerProgressPresentationComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK23PowerProgressPresentationComponent : public UPresentationItemProgressComponent
{
	GENERATED_BODY()

public:
	UK23PowerProgressPresentationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK23PowerProgressPresentationComponent) { return 0; }
