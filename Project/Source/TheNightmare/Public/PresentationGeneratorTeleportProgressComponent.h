#pragma once

#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "PresentationGeneratorTeleportProgressComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UPresentationGeneratorTeleportProgressComponent : public UPresentationItemProgressComponent
{
	GENERATED_BODY()

public:
	UPresentationGeneratorTeleportProgressComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPresentationGeneratorTeleportProgressComponent) { return 0; }
