#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "CoreLockedOverlayWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreLockedOverlayWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetIsLocked(bool isLocked, bool useAnimation);

public:
	UCoreLockedOverlayWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreLockedOverlayWidget) { return 0; }
