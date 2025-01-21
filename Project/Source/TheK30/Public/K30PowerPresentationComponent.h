#pragma once

#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "K30PowerPresentationComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK30PowerPresentationComponent : public UPresentationItemProgressComponent
{
	GENERATED_BODY()

public:
	UK30PowerPresentationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK30PowerPresentationComponent) { return 0; }
