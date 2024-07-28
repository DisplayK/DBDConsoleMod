#pragma once

#include "CoreMinimal.h"
#include "UMGBaseRootStorefrontWidget.h"
#include "UMGAtlRootStorefrontWidget.generated.h"

class UUMGCurrencyWidget;
class UUMGAuricCellsButton;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlRootStorefrontWidget : public UUMGBaseRootStorefrontWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta=(BindWidgetOptional))
	UUMGCurrencyWidget* ShardWalletWidget;

	UPROPERTY(meta=(BindWidgetOptional))
	UUMGAuricCellsButton* AuricWalletWidget;

public:
	UUMGAtlRootStorefrontWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlRootStorefrontWidget) { return 0; }
