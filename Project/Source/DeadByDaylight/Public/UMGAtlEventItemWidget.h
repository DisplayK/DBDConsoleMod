#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "EventItemsContentTypeUIData.h"
#include "UMGAtlEventItemWidget.generated.h"

class UImage;
class UTextBlock;
class UCanvasPanel;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlEventItemWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta=(BindWidgetOptional))
	UImage* SquareImageBackground;

	UPROPERTY(meta=(BindWidgetOptional))
	UImage* SquareRarityBackground;

	UPROPERTY(meta=(BindWidgetOptional))
	UImage* SquareIcon;

	UPROPERTY(meta=(BindWidgetOptional))
	UImage* PortraitImageBackground;

	UPROPERTY(meta=(BindWidgetOptional))
	UImage* PortraitRarityBackground;

	UPROPERTY(meta=(BindWidgetOptional))
	UImage* PortraitIcon;

	UPROPERTY(meta=(BindWidgetOptional))
	UTextBlock* NameText;

	UPROPERTY(meta=(BindWidgetOptional))
	UTextBlock* QuantityText;

	UPROPERTY(meta=(BindWidgetOptional))
	UCanvasPanel* PortraitCanvas;

	UPROPERTY(meta=(BindWidgetOptional))
	UCanvasPanel* SquareCanvas;

	UPROPERTY(EditDefaultsOnly)
	TArray<FEventItemsContentTypeUIData> ContentTypeUIData;

public:
	UUMGAtlEventItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlEventItemWidget) { return 0; }
