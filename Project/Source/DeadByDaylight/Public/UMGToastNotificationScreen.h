#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGToastNotificationScreen.generated.h"

class UUMGBaseToastWidget;
class UVerticalBox;

UCLASS(Abstract, EditInlineNew)
class UUMGToastNotificationScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TSoftClassPtr<UUMGBaseToastWidget> NotificationToast;

	UPROPERTY(EditDefaultsOnly)
	TSoftClassPtr<UUMGBaseToastWidget> InvitationPartyToast;

	UPROPERTY(meta=(BindWidgetOptional))
	UVerticalBox* ToastsContainer;

private:
	UPROPERTY(Export)
	TMap<uint32, UUMGBaseToastWidget*> _toastsDisplayedOnScreen;

protected:
	UFUNCTION()
	void HandleOnPromptSelected(int32 notificationId);

	UFUNCTION()
	void HandleOnNotificationDisplayEnd(int32 notificationId);

	UFUNCTION()
	void HandleOnButtonSelected(int32 buttonId, int32 notificationId);

public:
	UUMGToastNotificationScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGToastNotificationScreen) { return 0; }
