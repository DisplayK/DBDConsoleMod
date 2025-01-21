#pragma once

#include "CoreMinimal.h"
#include "ItemBundleViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "CoreItemBundleWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreItemBundleWidget : public UCoreBaseUserWidget, public IItemBundleViewInterface
{
	GENERATED_BODY()

public:
	UCoreItemBundleWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreItemBundleWidget) { return 0; }
