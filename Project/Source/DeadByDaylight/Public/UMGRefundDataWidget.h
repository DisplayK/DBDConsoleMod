#pragma once

#include "CoreMinimal.h"
#include "RefundUIData.h"
#include "MobileBaseUserWidget.h"
#include "UMGRefundDataWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UUMGRefundDataWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetDataAndUpdateWidget(const FRefundUIData& RefundUIData);

public:
	UUMGRefundDataWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGRefundDataWidget) { return 0; }
