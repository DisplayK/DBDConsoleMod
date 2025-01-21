#pragma once

#include "CoreMinimal.h"
#include "TooltipPressedData.h"
#include "MobileBaseUserWidget.h"
#include "ECurrencyType.h"
#include "UMGFogWidget.generated.h"

class UUMGBankAndPlayerInfoWidget;

UCLASS(EditInlineNew)
class UUMGFogWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Export)
	UUMGBankAndPlayerInfoWidget* BankAndPlayerInfoWidget;

protected:
	UFUNCTION()
	void OnRankTooltipTriggered(const FTooltipPressedData& tooltipPressedData);

	UFUNCTION()
	void OnLevelTooltipTriggered(const FTooltipPressedData& tooltipPressedData);

	UFUNCTION()
	void OnCurrencyTooltipTriggered(const FTooltipPressedData& tooltipPressedData, const ECurrencyType currencyType);

	UFUNCTION(BlueprintCallable)
	void HandleOnSettingButtonClick();

public:
	UUMGFogWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGFogWidget) { return 0; }
