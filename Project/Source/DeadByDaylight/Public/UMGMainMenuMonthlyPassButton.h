#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGMainMenuMonthlyPassButton.generated.h"

class UWidgetSwitcher;
class UButton;
class UAkAudioEvent;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGMainMenuMonthlyPassButton : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UWidgetSwitcher* ButtonSwitcher;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UButton* ActiveButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UButton* NonActiveButton;

	UPROPERTY(BlueprintReadOnly)
	FText PlayerName;

	UPROPERTY(EditAnywhere)
	UAkAudioEvent* OnClickSound;

protected:
	UFUNCTION(BlueprintCallable)
	void OnButtonClick();

public:
	UUMGMainMenuMonthlyPassButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGMainMenuMonthlyPassButton) { return 0; }
