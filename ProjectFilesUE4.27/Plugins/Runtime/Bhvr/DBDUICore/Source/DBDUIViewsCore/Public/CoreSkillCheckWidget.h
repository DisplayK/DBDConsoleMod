#pragma once

#include "CoreMinimal.h"
#include "SkillCheckViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "CoreSkillCheckWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreSkillCheckWidget : public UCoreBaseHudWidget, public ISkillCheckViewInterface
{
	GENERATED_BODY()

public:
	UCoreSkillCheckWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreSkillCheckWidget) { return 0; }
