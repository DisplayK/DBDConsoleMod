#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UMGSettingSubscriptionStatus.generated.h"

class UWidgetSwitcher;
class UHorizontalBox;
class UOverlay;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGSettingSubscriptionStatus : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FText SubscriptionStatusText;

	UPROPERTY(EditDefaultsOnly)
	FText StatusText;

	UPROPERTY(EditDefaultsOnly)
	FText InactiveStatusText;

	UPROPERTY(EditDefaultsOnly)
	FText EndText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UWidgetSwitcher* TypeSwitcher;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UHorizontalBox* ActiveWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UOverlay* InactiveWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* TitleText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* DisplayName;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* Status;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* StatusInactive;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* End;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* EndDate;

public:
	UUMGSettingSubscriptionStatus();
};

FORCEINLINE uint32 GetTypeHash(const UUMGSettingSubscriptionStatus) { return 0; }
