#pragma once

#include "CoreMinimal.h"
#include "OfferingViewInterface.h"
#include "CoreBaseLoadoutPartWidget.h"
#include "CoreOfferingWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreOfferingWidget : public UCoreBaseLoadoutPartWidget, public IOfferingViewInterface
{
	GENERATED_BODY()

public:
	UCoreOfferingWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreOfferingWidget) { return 0; }
