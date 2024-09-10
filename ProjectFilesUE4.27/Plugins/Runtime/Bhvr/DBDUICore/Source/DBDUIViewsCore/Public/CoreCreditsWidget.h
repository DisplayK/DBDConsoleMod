#pragma once

#include "CoreMinimal.h"
#include "CreditsViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "CreditsBackActionDelegate.h"
#include "CoreCreditsWidget.generated.h"

class UUITweenInstance;
class UDBDRichTextBlock;
class UCoreInputSwitcherWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreCreditsWidget : public UCoreBaseUserWidget, public ICreditsViewInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ScrollSpeed;

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* BackInputSwitcher;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* CreditsTextBlock;

private:
	UPROPERTY()
	FCreditsBackActionDelegate _backActionDelegate;

	UPROPERTY(Transient)
	UUITweenInstance* _tween;

private:
	UFUNCTION()
	void ScrollText();

	UFUNCTION()
	void OnScrollEnd(UUITweenInstance* tween);

public:
	UCoreCreditsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreCreditsWidget) { return 0; }
