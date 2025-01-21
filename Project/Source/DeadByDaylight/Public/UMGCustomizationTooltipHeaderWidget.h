#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "ECustomizationCategory.h"
#include "UMGCustomizationTooltipHeaderWidget.generated.h"

class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGCustomizationTooltipHeaderWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* Title;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* CollectionName;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* CategoryAndRarityText;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetOutfitComposition(const bool isUnbreakable, const TArray<ECustomizationCategory>& composition);

public:
	UUMGCustomizationTooltipHeaderWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCustomizationTooltipHeaderWidget) { return 0; }
