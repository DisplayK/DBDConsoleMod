#pragma once

#include "CoreMinimal.h"
#include "TormentTrailDetectorComponent.h"
#include "SurvivorTormentTrailDetector.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class USurvivorTormentTrailDetector : public UTormentTrailDetectorComponent
{
	GENERATED_BODY()

public:
	USurvivorTormentTrailDetector();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorTormentTrailDetector) { return 0; }
