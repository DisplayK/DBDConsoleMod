#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "BaseIndicatorWidget.generated.h"

class UCanvasPanel;
class UCanvasPanelSlot;
class UImage;

UCLASS(EditInlineNew)
class UBaseIndicatorWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UCanvasPanel* _safeZonePanel;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UCanvasPanelSlot* _canvasPanelSlot;

	UPROPERTY(EditDefaultsOnly)
	float RadiusMultiplier;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* IndicatorPanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* Indicator;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* ArrowImage;

protected:
	UFUNCTION()
	void OnOutAnimationFinished();

public:
	UBaseIndicatorWidget();
};

FORCEINLINE uint32 GetTypeHash(const UBaseIndicatorWidget) { return 0; }
