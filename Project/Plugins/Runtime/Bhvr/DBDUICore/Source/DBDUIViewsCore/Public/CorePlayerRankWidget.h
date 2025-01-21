#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "CorePlayerRankWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCorePlayerRankWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	UCorePlayerRankWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCorePlayerRankWidget) { return 0; }
