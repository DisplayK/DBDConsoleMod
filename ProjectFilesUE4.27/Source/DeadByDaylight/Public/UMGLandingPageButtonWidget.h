#pragma once

#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGLandingPageButtonWidget.generated.h"

class UCanvasPanel;
class URichTextBlock;
class UTextBlock;
class UImage;

UCLASS(Abstract, EditInlineNew)
class UUMGLandingPageButtonWidget : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* BigTag;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* SmallTag;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* TagText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	URichTextBlock* BannerTitleText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* BannerImage;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* TitleColorBg;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* BorderColor;

public:
	UUMGLandingPageButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGLandingPageButtonWidget) { return 0; }
