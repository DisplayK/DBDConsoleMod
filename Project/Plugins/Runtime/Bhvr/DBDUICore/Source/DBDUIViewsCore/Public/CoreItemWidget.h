#pragma once

#include "CoreMinimal.h"
#include "ItemViewInterface.h"
#include "CoreBaseLoadoutPartWidget.h"
#include "CoreItemWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreItemWidget : public UCoreBaseLoadoutPartWidget, public IItemViewInterface
{
	GENERATED_BODY()

public:
	UCoreItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreItemWidget) { return 0; }
