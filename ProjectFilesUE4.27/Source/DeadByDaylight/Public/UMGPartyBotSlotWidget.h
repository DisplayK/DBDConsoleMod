#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "EAIDifficultyLevel.h"
#include "UMGPartyBotSlotWidget.generated.h"

class UCanvasPanel;
class UUMGBaseButtonWidget;
class UTextBlock;
class UImage;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGPartyBotSlotWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta=(BindWidgetOptional))
	UTextBlock* RoleText;

	UPROPERTY(meta=(BindWidgetOptional))
	UTextBlock* BotDifficultyText;

	UPROPERTY(meta=(BindWidgetOptional))
	UTextBlock* CharacterNameText;

	UPROPERTY(meta=(BindWidgetOptional))
	UUMGBaseButtonWidget* EditButton;

	UPROPERTY(meta=(BindWidgetOptional))
	UImage* EditIcon;

	UPROPERTY(meta=(BindWidgetOptional))
	UUMGBaseButtonWidget* InvitePartyButton;

	UPROPERTY(meta=(BindWidgetOptional))
	UCanvasPanel* InvitePartyCanvas;

	UPROPERTY(EditDefaultsOnly)
	TMap<EAIDifficultyLevel, FSlateColor> DifficultyColors;

private:
	UFUNCTION()
	void HandleInvitePartyButtonEvent();

	UFUNCTION()
	void HandleEditButtonEvent();

public:
	UUMGPartyBotSlotWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPartyBotSlotWidget) { return 0; }
