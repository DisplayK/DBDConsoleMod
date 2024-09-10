#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "EPartyPlayerSlotWidgetState.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGPartySlotsWidget.generated.h"

class UPanelWidget;
class UUMGPartyBotSlotWidget;
class UUMGPartyPlayerSlotWidget;
class UVerticalBox;

UCLASS(Abstract, EditInlineNew)
class UUMGPartySlotsWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta=(BindWidgetOptional))
	UPanelWidget* PartyPlayerSlotsContainer;

	UPROPERTY(Export)
	TArray<UUMGPartyPlayerSlotWidget*> _partyPlayerSlots;

	UPROPERTY(meta=(BindWidgetOptional))
	UVerticalBox* PartyBotSlotsContainer;

	UPROPERTY(EditDefaultsOnly)
	TSoftClassPtr<UUMGPartyBotSlotWidget> PartyBotSlotWidgetClass;

	UPROPERTY(EditDefaultsOnly)
	int32 MaxSlotCount;

	UPROPERTY(EditDefaultsOnly)
	FSlateColor ConflictingCharacterColor;

	UPROPERTY(EditDefaultsOnly)
	FSlateColor NormalCharacterColor;

private:
	UFUNCTION(BlueprintCallable)
	void SwapWidgets(int32 first, int32 second);

	UFUNCTION(BlueprintCallable)
	void SetWidgetState(int32 index, EPartyPlayerSlotWidgetState state);

	UFUNCTION(BlueprintCallable)
	void RearrangePartySlots();

	UFUNCTION()
	void HandleKickPlayerButtonClickEvent(const FString& friendKrakenId);

	UFUNCTION()
	void HandleInviteFriendButtonClickEvent();

	UFUNCTION()
	void HandleBotEditButtonClickEvent(const int32 index);

public:
	UUMGPartySlotsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPartySlotsWidget) { return 0; }
