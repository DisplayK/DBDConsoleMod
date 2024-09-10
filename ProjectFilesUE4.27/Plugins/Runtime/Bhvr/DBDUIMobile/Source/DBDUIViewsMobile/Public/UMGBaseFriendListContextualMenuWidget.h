#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "EActionOnFriendType.h"
#include "UMGBaseFriendListContextualMenuWidget.generated.h"

class UUMGFriendButtonWidget;
class UAkAudioEvent;

UCLASS(Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGBaseFriendListContextualMenuWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta=(BindWidgetOptional))
	UUMGFriendButtonWidget* InviteToPartyButton;

	UPROPERTY(meta=(BindWidgetOptional))
	UUMGFriendButtonWidget* MuteButton;

	UPROPERTY(meta=(BindWidgetOptional))
	UUMGFriendButtonWidget* UnmuteButton;

	UPROPERTY(meta=(BindWidgetOptional))
	UUMGFriendButtonWidget* RemoveFriendButton;

	UPROPERTY(meta=(BindWidgetOptional))
	UUMGFriendButtonWidget* RemovePlayerFromPartyButton;

	UPROPERTY(EditAnywhere)
	UAkAudioEvent* TransitionOutAnimationSound;

protected:
	UFUNCTION(BlueprintCallable)
	void HandleActionTriggered(EActionOnFriendType actionType);

public:
	UUMGBaseFriendListContextualMenuWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBaseFriendListContextualMenuWidget) { return 0; }
