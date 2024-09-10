#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGStreamVideoWidget.generated.h"

class UUMGBaseButtonWidget;
class UImage;
class UButton;

UCLASS(Abstract, EditInlineNew)
class UUMGStreamVideoWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* VideoImage;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UButton* TapButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGBaseButtonWidget* SkipButton;

	UPROPERTY(EditDefaultsOnly)
	float _timerShowSkipButton;

protected:
	UFUNCTION()
	void OnTapButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnSkipButtonClicked();

public:
	UUMGStreamVideoWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGStreamVideoWidget) { return 0; }
