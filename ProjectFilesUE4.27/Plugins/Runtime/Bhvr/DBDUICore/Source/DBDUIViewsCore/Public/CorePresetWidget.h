#pragma once

#include "CoreMinimal.h"
#include "CoreButtonWidget.h"
#include "CorePresetWidget.generated.h"

class UCoreOnHoverBorderWidget;
class UGridPanel;
class UDBDTextBlock;
class UDBDImage;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCorePresetWidget : public UCoreButtonWidget
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 PresetId;

	UPROPERTY(BlueprintReadOnly)
	bool IsSelected;

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* PresetText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UGridPanel* Selected;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* Background;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreOnHoverBorderWidget* OnHoverBorder;

public:
	UFUNCTION(BlueprintCallable)
	void SetSelectedPreset(bool isSelectedNew);

	UFUNCTION(BlueprintCallable)
	void SetPreset(int32 presetNum);

public:
	UCorePresetWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCorePresetWidget) { return 0; }
