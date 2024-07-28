#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "OnCharacterUseFreeTicketButtonClickedEvent.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGCharacterFreeTicketWidget.generated.h"

class UVerticalBox;
class UWidgetSwitcher;
class UUMGCharacterFreeTicketItemButton;

UCLASS(EditInlineNew)
class UUMGCharacterFreeTicketWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnCharacterUseFreeTicketButtonClickedEvent OnUseFreeTicketEvent;

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UWidgetSwitcher* PanelSwitcher;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UVerticalBox* FreeTicketItemButtonBox;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGCharacterFreeTicketItemButton> _buttonClass;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void UpdateBGColor(bool isSlasher);

public:
	UFUNCTION()
	void HandleButtonClickEvent(const FString& ticketID, const FString& characterName);

public:
	UUMGCharacterFreeTicketWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCharacterFreeTicketWidget) { return 0; }
