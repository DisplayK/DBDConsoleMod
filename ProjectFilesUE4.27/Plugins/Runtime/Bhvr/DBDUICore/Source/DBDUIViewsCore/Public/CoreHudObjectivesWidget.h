#pragma once

#include "CoreMinimal.h"
#include "HudObjectivesViewInterface.h"
#include "TutorialHighlightViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "CoreHudObjectivesWidget.generated.h"

class UDBDTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreHudObjectivesWidget : public UCoreBaseHudWidget, public IHudObjectivesViewInterface, public ITutorialHighlightViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* SpecialSpacer;

public:
	UCoreHudObjectivesWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreHudObjectivesWidget) { return 0; }
