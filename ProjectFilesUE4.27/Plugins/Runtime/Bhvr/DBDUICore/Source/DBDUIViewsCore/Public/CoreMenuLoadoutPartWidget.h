#pragma once

#include "CoreMinimal.h"
#include "ETooltipVerticalAlignment.h"
#include "CoreSelectableButtonWidget.h"
#include "ETooltipHorizontalAlignment.h"
#include "ELoadoutSlot.h"
#include "LoadoutTooltipData.h"
#include "CoreMenuLoadoutPartWidget.generated.h"

class UMenuLoadoutPartViewData;
class UScaleBox;
class UDBDImage;
class UCoreOnHoverBorderWidget;
class UGridPanel;
class UTextBlock;
class UTexture2D;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreMenuLoadoutPartWidget : public UCoreSelectableButtonWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	ELoadoutSlot SlotIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETooltipHorizontalAlignment HorizontalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETooltipVerticalAlignment VerticalAlignment;

protected:
	UPROPERTY(BlueprintReadWrite, Transient)
	FLoadoutTooltipData _loadoutTooltipViewData;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* RarityIMG;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* IconIMG;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* KillSwitchIMG;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* LockedIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UGridPanel* Selected;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UScaleBox* LayoutScale;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreOnHoverBorderWidget* OnHoverBorder;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* StackCountTB;

	UPROPERTY(EditDefaultsOnly)
	UTexture2D* RarityTexture;

private:
	UPROPERTY()
	FName _itemId;

public:
	UFUNCTION(BlueprintCallable)
	void SetSelectedState(bool selectedState);

	UFUNCTION(BlueprintCallable)
	void SetLoadoutPartTooltipData(const FLoadoutTooltipData& tooltipData);

	UFUNCTION(BlueprintCallable)
	void SetLoadoutPartScale(float scale);

protected:
	UFUNCTION(BlueprintCallable)
	void SetLoadoutPartData(const UMenuLoadoutPartViewData* data);

public:
	UFUNCTION(BlueprintCallable)
	FName GetWidgetItemId();

	UFUNCTION(BlueprintCallable)
	FLoadoutTooltipData GetTooltipData();

public:
	UCoreMenuLoadoutPartWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMenuLoadoutPartWidget) { return 0; }
