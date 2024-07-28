#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaMatchConfigScreen.generated.h"

class UUMGBaseButtonWidget;
class UHorizontalBox;
class UUMGAtlantaMatchConfigPageScroll;
class UVerticalBox;
class UTextBlock;
class UMatchConfigTabsDataAsset;

UCLASS(Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGAtlantaMatchConfigScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGAtlantaMatchConfigPageScroll* MatchConfigPageScroll;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UHorizontalBox* TabsBox;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UVerticalBox* BotsTabsBox;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGBaseButtonWidget* BackButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* MatchConfigTitle;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* InventoryTitle;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* SelectedTabTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMatchConfigTabsDataAsset* TabsDataAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateBrush SmallTabSeparation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateBrush BigTabSeparation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TabsVerticalPadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TabsHorizontalPadding;

protected:
	UFUNCTION()
	void HandleBackButtonClicked();

public:
	UUMGAtlantaMatchConfigScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaMatchConfigScreen) { return 0; }
