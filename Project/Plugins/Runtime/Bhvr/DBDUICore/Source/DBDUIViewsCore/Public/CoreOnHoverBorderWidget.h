#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "CoreOnHoverBorderWidget.generated.h"

class UCoreButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreOnHoverBorderWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateColors(const FLinearColor& progressBarColor, const FLinearColor& backgroundColor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UnbindFromButton();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayPressedAnimation(bool playForward);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayHoveredAnimation(bool playForward);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void BindToButton(UCoreButtonWidget* buttonToBindOn);

public:
	UCoreOnHoverBorderWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreOnHoverBorderWidget) { return 0; }
