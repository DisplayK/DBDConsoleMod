#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "UMGFriendElementWidget.h"
#include "UMGFriendPartyListElementWidget.generated.h"

class UImage;
class UWidgetSwitcher;
class UButton;

UCLASS(Abstract, EditInlineNew)
class UUMGFriendPartyListElementWidget : public UUMGFriendElementWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta=(BindWidgetOptional))
	UWidgetSwitcher* ButtonOrStatusSwitcher;

	UPROPERTY(meta=(BindWidgetOptional))
	UButton* CancelInviteButton;

	UPROPERTY(meta=(BindWidgetOptional))
	UImage* PartyStatusImage;

	UPROPERTY(EditDefaultsOnly)
	FSlateBrush IconNotReady;

	UPROPERTY(EditDefaultsOnly)
	FSlateBrush IconReady;

protected:
	UFUNCTION()
	void HandleCancelInviteButtonClicked();

public:
	UUMGFriendPartyListElementWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGFriendPartyListElementWidget) { return 0; }
