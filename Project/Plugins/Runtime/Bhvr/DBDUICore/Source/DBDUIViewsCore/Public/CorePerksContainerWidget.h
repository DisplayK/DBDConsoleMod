#pragma once

#include "CoreMinimal.h"
#include "PerksContainerViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "UObject/ScriptInterface.h"
#include "CorePerksContainerWidget.generated.h"

class UCorePerkWidget;
class IPerkViewInterface;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCorePerksContainerWidget : public UCoreBaseHudWidget, public IPerksContainerViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, Export)
	TArray<UCorePerkWidget*> PerkWidgets;

private:
	UPROPERTY(Transient)
	TArray<TScriptInterface<IPerkViewInterface>> _perkViewInterfaces;

public:
	UCorePerksContainerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCorePerksContainerWidget) { return 0; }
