#pragma once

#include "CoreMinimal.h"
#include "CoreBaseHudWidget.h"
#include "PlayerStatusViewData.h"
#include "CorePlayerStatusKillerEffectWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCorePlayerStatusKillerEffectWidget : public UCoreBaseHudWidget
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetKillerData(const FPlayerStatusViewData& data);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ClearVisual();

public:
	UCorePlayerStatusKillerEffectWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCorePlayerStatusKillerEffectWidget) { return 0; }
