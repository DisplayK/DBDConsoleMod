#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "ECurrencyType.h"
#include "UMGAtlantaStoreScreen.generated.h"

class UScaleBox;
class UUniformGridPanel;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaStoreScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UScaleBox* AuricCellsWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUniformGridPanel* AuricCellsGridPanel;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetBank(ECurrencyType currencyType, int32 bank);

	UFUNCTION(BlueprintCallable)
	void HandleOnStoreLeft();

	UFUNCTION(BlueprintCallable)
	void HandleOnClickedBuyAuricCell(int32 cellIndex);

public:
	UUMGAtlantaStoreScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaStoreScreen) { return 0; }
