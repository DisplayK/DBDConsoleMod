#pragma once

#include "CoreMinimal.h"
#include "UMGGenericPopup.h"
#include "UMGAtlantaFreeTicketConfirmToUsePopup.generated.h"

class UUMGRichTextFreeTicketDecorator;
class UTexture2D;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaFreeTicketConfirmToUsePopup : public UUMGGenericPopup
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* FreeTicketIcon;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FText PopupTitleContent;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SetPopupTitle(const FText& characterName);

	UFUNCTION(BlueprintImplementableEvent)
	void SetFreeTicketIconTexture(bool isSlasher);

	UFUNCTION(BlueprintImplementableEvent)
	UUMGRichTextFreeTicketDecorator* GetDecorator();

public:
	UUMGAtlantaFreeTicketConfirmToUsePopup();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaFreeTicketConfirmToUsePopup) { return 0; }
