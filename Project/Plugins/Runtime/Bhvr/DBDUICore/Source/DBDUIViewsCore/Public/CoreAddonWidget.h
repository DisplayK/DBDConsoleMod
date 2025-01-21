#pragma once

#include "CoreMinimal.h"
#include "AddonViewInterface.h"
#include "CoreBaseLoadoutPartWidget.h"
#include "CoreAddonWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreAddonWidget : public UCoreBaseLoadoutPartWidget, public IAddonViewInterface
{
	GENERATED_BODY()

public:
	UCoreAddonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreAddonWidget) { return 0; }
