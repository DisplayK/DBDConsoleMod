#pragma once

#include "CoreMinimal.h"
#include "OfferingInteractionViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "CoreOfferingInteractionWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreOfferingInteractionWidget : public UCoreBaseHudWidget, public IOfferingInteractionViewInterface
{
	GENERATED_BODY()

public:
	UCoreOfferingInteractionWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreOfferingInteractionWidget) { return 0; }
