#pragma once

#include "CoreMinimal.h"
#include "ItemInteractionViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "CoreItemInteractionWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreItemInteractionWidget : public UCoreBaseHudWidget, public IItemInteractionViewInterface
{
	GENERATED_BODY()

public:
	UCoreItemInteractionWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreItemInteractionWidget) { return 0; }
