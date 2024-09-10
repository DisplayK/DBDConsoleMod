#pragma once

#include "CoreMinimal.h"
#include "FearMarketPopupViewInterface.h"
#include "CoreGenericPopupWidget.h"
#include "CoreFearMarketWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreFearMarketWidget : public UCoreGenericPopupWidget, public IFearMarketPopupViewInterface
{
	GENERATED_BODY()

public:
	UCoreFearMarketWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreFearMarketWidget) { return 0; }
