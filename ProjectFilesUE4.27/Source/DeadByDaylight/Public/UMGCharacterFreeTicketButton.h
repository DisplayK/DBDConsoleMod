#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGCharacterFreeTicketButton.generated.h"

class UImage;
class UWidgetSwitcher;
class UTextBlock;

UCLASS(EditInlineNew)
class UUMGCharacterFreeTicketButton : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UWidgetSwitcher* ButtonSwitcher;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* FreeTicketLeftSecondsText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* FreeTicketLeftSecondsBG;

public:
	UUMGCharacterFreeTicketButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCharacterFreeTicketButton) { return 0; }
