#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaCreditsPopup.generated.h"

class UUMGHtmlRichText;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaCreditsPopup : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGHtmlRichText* RichTitleText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGHtmlRichText* RichContentText;

	UPROPERTY(EditAnywhere)
	FString _titleDefaultStyle;

public:
	UFUNCTION(BlueprintCallable)
	void SetCreditTitle(const FString& title);

	UFUNCTION(BlueprintCallable)
	void SetCreditContent(const FString& content);

public:
	UUMGAtlantaCreditsPopup();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaCreditsPopup) { return 0; }
