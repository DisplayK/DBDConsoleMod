#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "UMGGenericPopup.generated.h"

class URichTextBlock;
class UImage;
class UUMGPopupButton;
class UUMGHtmlRichText;

UCLASS(Abstract, EditInlineNew)
class UUMGGenericPopup : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Export)
	URichTextBlock* Title;

	UPROPERTY(BlueprintReadOnly, Export)
	UUMGHtmlRichText* Message;

	UPROPERTY(BlueprintReadOnly, Export)
	UImage* TitleBackground;

	UPROPERTY(BlueprintReadOnly, Export)
	UImage* TitleSmoke;

	UPROPERTY(BlueprintReadOnly, Export)
	UUMGPopupButton* RegressionPopupButton;

	UPROPERTY(BlueprintReadOnly, Export)
	UUMGPopupButton* AlternativePopupButton;

	UPROPERTY(BlueprintReadOnly, Export)
	UUMGPopupButton* ProgressionPopupButton;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FSlateColor ErrorTitleSmokeColor;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FSlateColor ErrorTitleBackgroundColor;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FSlateColor DefaultTitleSmokeColor;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FSlateColor DefaultTitleBackgroundColor;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void OnPopupDisappearance();

	UFUNCTION(BlueprintImplementableEvent)
	void OnPopupAppearance();

public:
	UUMGGenericPopup();
};

FORCEINLINE uint32 GetTypeHash(const UUMGGenericPopup) { return 0; }
