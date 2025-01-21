#pragma once

#include "CoreMinimal.h"
#include "BasePopupViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "CoreBasePopupWidget.generated.h"

class UBasePopupViewData;
class UDBDRichTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreBasePopupWidget : public UCoreBaseUserWidget, public IBasePopupViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* TitleText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* MessageText;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void Show(UBasePopupViewData* data);

	UFUNCTION(BlueprintImplementableEvent)
	void Hide();

public:
	UCoreBasePopupWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreBasePopupWidget) { return 0; }
