#pragma once

#include "CoreMinimal.h"
#include "NoiseIndicatorWidget.h"
#include "KillerNoiseIndicatorWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UKillerNoiseIndicatorWidget : public UNoiseIndicatorWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetSoundDistancePercentage(float distancePercentage);

public:
	UKillerNoiseIndicatorWidget();
};

FORCEINLINE uint32 GetTypeHash(const UKillerNoiseIndicatorWidget) { return 0; }
