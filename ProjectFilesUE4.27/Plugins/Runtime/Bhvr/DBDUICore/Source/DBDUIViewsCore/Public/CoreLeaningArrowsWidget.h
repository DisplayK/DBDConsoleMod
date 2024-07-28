#pragma once

#include "CoreMinimal.h"
#include "LeaningArrowsViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "CoreLeaningArrowsWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreLeaningArrowsWidget : public UCoreBaseHudWidget, public ILeaningArrowsViewInterface
{
	GENERATED_BODY()

public:
	UCoreLeaningArrowsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreLeaningArrowsWidget) { return 0; }
