#pragma once

#include "CoreMinimal.h"
#include "Components/SpotLightComponent.h"
#include "StationarySpotLightComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UStationarySpotLightComponent : public USpotLightComponent
{
	GENERATED_BODY()

public:
	UStationarySpotLightComponent();
};

FORCEINLINE uint32 GetTypeHash(const UStationarySpotLightComponent) { return 0; }
