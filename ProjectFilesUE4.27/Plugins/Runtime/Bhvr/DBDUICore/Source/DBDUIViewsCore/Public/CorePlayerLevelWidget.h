#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "CorePlayerLevelWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCorePlayerLevelWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	UCorePlayerLevelWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCorePlayerLevelWidget) { return 0; }
