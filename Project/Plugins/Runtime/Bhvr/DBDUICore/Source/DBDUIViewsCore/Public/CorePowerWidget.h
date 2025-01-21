#pragma once

#include "CoreMinimal.h"
#include "PowerViewInterface.h"
#include "CoreBaseLoadoutPartWidget.h"
#include "CorePowerWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCorePowerWidget : public UCoreBaseLoadoutPartWidget, public IPowerViewInterface
{
	GENERATED_BODY()

public:
	UCorePowerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCorePowerWidget) { return 0; }
