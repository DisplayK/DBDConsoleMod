#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "StatusEffectAlertViewData.h"
#include "CoreHudStatusEffectAlertItem.generated.h"

UCLASS(EditInlineNew)
class UCoreHudStatusEffectAlertItem : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetData(const FStatusEffectAlertViewData& data);

public:
	UCoreHudStatusEffectAlertItem();
};

FORCEINLINE uint32 GetTypeHash(const UCoreHudStatusEffectAlertItem) { return 0; }
