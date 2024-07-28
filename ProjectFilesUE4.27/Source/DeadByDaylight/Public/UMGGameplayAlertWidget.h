#pragma once

#include "CoreMinimal.h"
#include "UMGBaseAlertWidget.h"
#include "StatusEffectSlotData.h"
#include "InventorySlotData.h"
#include "UMGGameplayAlertWidget.generated.h"

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGGameplayAlertWidget : public UUMGBaseAlertWidget
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void UpdateWidget(const FStatusEffectSlotData& statusEffectData, const FInventorySlotData& originatorData);

public:
	UUMGGameplayAlertWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGGameplayAlertWidget) { return 0; }
