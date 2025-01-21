#pragma once

#include "CoreMinimal.h"
#include "FlashlightableLightingStrategy.h"
#include "FlashlightablePointsLightingStrategy.generated.h"

class UPointsProvider;

UCLASS(EditInlineNew)
class DBDGAMEPLAY_API UFlashlightablePointsLightingStrategy : public UFlashlightableLightingStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, NoClear, meta=(BindWidgetOptional))
	UPointsProvider* _pointsProvider;

	UPROPERTY(EditAnywhere)
	float _impactPointDistanceError;

public:
	UFlashlightablePointsLightingStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UFlashlightablePointsLightingStrategy) { return 0; }
