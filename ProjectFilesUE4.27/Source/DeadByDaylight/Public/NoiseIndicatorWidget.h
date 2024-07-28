#pragma once

#include "CoreMinimal.h"
#include "BaseIndicatorWidget.h"
#include "NoiseIndicatorWidget.generated.h"

class UCanvasPanel;

UCLASS(Abstract, EditInlineNew)
class UNoiseIndicatorWidget : public UBaseIndicatorWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetIndicatorPanel(UCanvasPanel* panel);

public:
	UNoiseIndicatorWidget();
};

FORCEINLINE uint32 GetTypeHash(const UNoiseIndicatorWidget) { return 0; }
