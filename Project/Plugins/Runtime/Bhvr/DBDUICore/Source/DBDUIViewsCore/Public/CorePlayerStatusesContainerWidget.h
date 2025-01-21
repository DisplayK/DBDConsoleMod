#pragma once

#include "CoreMinimal.h"
#include "TutorialHighlightViewInterface.h"
#include "PlayerStatusesContainerViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "UObject/ScriptInterface.h"
#include "CorePlayerStatusesContainerWidget.generated.h"

class UCorePlayerStatusWidget;
class IPlayerStatusViewInterface;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCorePlayerStatusesContainerWidget : public UCoreBaseHudWidget, public IPlayerStatusesContainerViewInterface, public ITutorialHighlightViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, Export)
	TArray<UCorePlayerStatusWidget*> PlayerStatusWidgets;

private:
	UPROPERTY(Transient)
	TArray<TScriptInterface<IPlayerStatusViewInterface>> _playerStatusViewInterfaces;

public:
	UCorePlayerStatusesContainerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCorePlayerStatusesContainerWidget) { return 0; }
