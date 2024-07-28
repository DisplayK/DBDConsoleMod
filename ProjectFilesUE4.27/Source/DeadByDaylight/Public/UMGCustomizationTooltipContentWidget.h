#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGCustomizationTooltipContentWidget.generated.h"

class UUMGHtmlRichText;
class UUMGCustomizationInfoWidget;
class UUMGCustomizationItemPriceWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGCustomizationTooltipContentWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGHtmlRichText* ItemDescription;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGCustomizationInfoWidget* OutfitInformation;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGCustomizationInfoWidget* RoleInformation;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGCustomizationInfoWidget* ReplacementInformation;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGCustomizationItemPriceWidget* AuricCellsPrice;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGCustomizationItemPriceWidget* IridescentShardsPrice;

public:
	UUMGCustomizationTooltipContentWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCustomizationTooltipContentWidget) { return 0; }
