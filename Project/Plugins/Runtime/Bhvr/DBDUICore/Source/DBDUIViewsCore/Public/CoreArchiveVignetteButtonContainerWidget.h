#pragma once

#include "CoreMinimal.h"
#include "CoreTabContainerWidget.h"
#include "CoreArchiveVignetteButtonContainerWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveVignetteButtonContainerWidget : public UCoreTabContainerWidget
{
	GENERATED_BODY()

public:
	UCoreArchiveVignetteButtonContainerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveVignetteButtonContainerWidget) { return 0; }
