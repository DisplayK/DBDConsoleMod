#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RenderingFeaturesSequencer.generated.h"

class ADBDAggregateCullDistanceVolumes;
class UWorld;

UCLASS()
class DEADBYDAYLIGHT_API URenderingFeaturesSequencer : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ADBDAggregateCullDistanceVolumes* _aggregateCullDistanceVolumes;

	UPROPERTY(Transient)
	UWorld* _world;

public:
	URenderingFeaturesSequencer();
};

FORCEINLINE uint32 GetTypeHash(const URenderingFeaturesSequencer) { return 0; }
