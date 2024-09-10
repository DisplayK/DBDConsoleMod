#pragma once

#include "CoreMinimal.h"
#include "PerkViewInterface.h"
#include "CoreBaseLoadoutPartWidget.h"
#include "CorePerkWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCorePerkWidget : public UCoreBaseLoadoutPartWidget, public IPerkViewInterface
{
	GENERATED_BODY()

public:
	UCorePerkWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCorePerkWidget) { return 0; }
