#pragma once

#include "CoreMinimal.h"
#include "NoiseIndicatorWidget.h"
#include "TerrorRadiusIndicatorWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UTerrorRadiusIndicatorWidget : public UNoiseIndicatorWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _anchorY;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetSoundDistancePercentage(float distancePercentage);

public:
	UTerrorRadiusIndicatorWidget();
};

FORCEINLINE uint32 GetTypeHash(const UTerrorRadiusIndicatorWidget) { return 0; }
