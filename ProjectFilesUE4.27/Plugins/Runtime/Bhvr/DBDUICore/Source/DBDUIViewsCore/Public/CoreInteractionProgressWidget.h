#pragma once

#include "CoreMinimal.h"
#include "OnHemorrhageAnimationCompleteEvent.h"
#include "InteractionProgressViewInterface.h"
#include "StatusEffectViewData.h"
#include "TutorialHighlightViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "CoreInteractionProgressWidget.generated.h"

class UCoreStatusEffectIcon;

UCLASS(EditInlineNew)
class UCoreInteractionProgressWidget : public UCoreBaseHudWidget, public IInteractionProgressViewInterface, public ITutorialHighlightViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, Export)
	TArray<UCoreStatusEffectIcon*> Proficiencies;

private:
	UPROPERTY(BlueprintAssignable)
	FOnHemorrhageAnimationCompleteEvent _hemorrhageAnimationIsCompleteDelegate;

protected:
	UFUNCTION(BlueprintCallable)
	void SetProficiencies(const TArray<FStatusEffectViewData>& proficiencyDatas);

public:
	UCoreInteractionProgressWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreInteractionProgressWidget) { return 0; }
