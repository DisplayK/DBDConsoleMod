#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "Templates/SubclassOf.h"
#include "CurrencyProgressionTooltipViewData.h"
#include "CurrencyProgressionTooltipWidget.generated.h"

class UDBDImage;
class UVerticalBox;
class UCoreCurrencyExpirationLabelWidget;
class UDBDTextBlock;
class UDBDRichTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCurrencyProgressionTooltipWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	int32 MaxExpirationLabels;

	UPROPERTY(EditDefaultsOnly, NoClear)
	TSubclassOf<UCoreCurrencyExpirationLabelWidget> CoreCurrencyExpirationLabelWidgetClass;

	UPROPERTY(BlueprintReadOnly, Export)
	UDBDTextBlock* CurrencyTB;

	UPROPERTY(BlueprintReadOnly, Export)
	UDBDTextBlock* CurrencyTitleTB;

	UPROPERTY(BlueprintReadOnly, Export)
	UDBDRichTextBlock* CurrencyDescriptionRTB;

	UPROPERTY(BlueprintReadOnly, Export)
	UDBDImage* TitleBgIMG;

	UPROPERTY(BlueprintReadOnly, Export)
	UVerticalBox* EventContainer;

	UPROPERTY(BlueprintReadOnly, Export)
	UDBDTextBlock* EventNameTB;

	UPROPERTY(BlueprintReadOnly, Export)
	UDBDTextBlock* EventDescriptionTB;

	UPROPERTY(BlueprintReadOnly, Export)
	UDBDTextBlock* EventTimerTB;

	UPROPERTY(BlueprintReadOnly, Export)
	UVerticalBox* ExpirationPanel;

	UPROPERTY(BlueprintReadOnly, Export)
	UVerticalBox* ExpirationLabelContainer;

	UPROPERTY(BlueprintReadOnly, Export)
	UDBDTextBlock* ExpirationTitleTB;

private:
	UPROPERTY(Transient, Export)
	TArray<UCoreCurrencyExpirationLabelWidget*> _currencyExpirationWidgetPool;

public:
	UFUNCTION(BlueprintCallable)
	void SetTooltipData(const FCurrencyProgressionTooltipViewData& currencyViewData);

public:
	UCurrencyProgressionTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCurrencyProgressionTooltipWidget) { return 0; }
