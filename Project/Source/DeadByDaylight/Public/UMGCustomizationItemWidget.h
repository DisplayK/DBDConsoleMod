#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGCustomizationItemWidget.generated.h"

class UImage;
class UCanvasPanel;
class UVerticalBox;
class UUMGCustomizationItemPriceWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGCustomizationItemWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* RarityBackground;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* PaintOverlay;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* Icon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* NewIndicator;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* OutfitIndicator;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UVerticalBox* PricesContainer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* ItemSelectedBorder;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* EquippedContainer;

	UPROPERTY(EditDefaultsOnly, NoClear)
	TSoftClassPtr<UUMGCustomizationItemPriceWidget> _customizationItemPriceWidgetClass;

private:
	UPROPERTY(Transient, Export)
	TArray<UUMGCustomizationItemPriceWidget*> _priceWidgets;

	UPROPERTY(Transient)
	int32 _itemIndex;

	UPROPERTY(Transient)
	FName _itemId;

protected:
	UFUNCTION(BlueprintCallable)
	void BroadcastAvailableItemSelected();

public:
	UUMGCustomizationItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCustomizationItemWidget) { return 0; }
