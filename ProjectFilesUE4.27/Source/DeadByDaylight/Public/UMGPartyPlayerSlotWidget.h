#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "EPartyPlayerSlotWidgetState.h"
#include "Fonts/SlateFontInfo.h"
#include "UMGPartyPlayerSlotWidget.generated.h"

class UCanvasPanel;
class UUMGBaseButtonWidget;
class UTextBlock;
class UWidgetSwitcher;
class UImage;
class UWidget;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGPartyPlayerSlotWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta=(BindWidgetOptional))
	UTextBlock* PlayerName;

	UPROPERTY(meta=(BindWidgetOptional))
	UTextBlock* AdditionalInformationText;

	UPROPERTY(meta=(BindWidgetOptional))
	UImage* FriendIcon;

	UPROPERTY(meta=(BindWidgetOptional))
	UUMGBaseButtonWidget* KickPlayerButton;

	UPROPERTY(EditDefaultsOnly)
	FSlateFontInfo CharacterNameStyle;

	UPROPERTY(EditDefaultsOnly)
	FSlateFontInfo PlayerInMatchStyle;

	UPROPERTY(EditDefaultsOnly)
	float PlayerInMatchOpacity;

	UPROPERTY(EditDefaultsOnly)
	float PlayerInLobbyOpacity;

	UPROPERTY(meta=(BindWidgetOptional))
	UWidget* PlayerInformationContainer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* ReadyIconsCanvas;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* RequestRoleIconsCanvas;

	UPROPERTY(meta=(BindWidgetOptional))
	UWidgetSwitcher* RoleSwitcher;

	UPROPERTY(meta=(BindWidgetOptional))
	UImage* LeaderIcon;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetVisualsFromState(EPartyPlayerSlotWidgetState widgetState);

private:
	UFUNCTION()
	void HandleKickPlayerButtonEvent();

public:
	UUMGPartyPlayerSlotWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPartyPlayerSlotWidget) { return 0; }
