#pragma once

#include "CoreMinimal.h"
#include "PingStatusViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "CorePingStatusWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCorePingStatusWidget : public UCoreBaseHudWidget, public IPingStatusViewInterface
{
	GENERATED_BODY()

public:
	UCorePingStatusWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCorePingStatusWidget) { return 0; }
