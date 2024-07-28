#pragma once

#include "CoreMinimal.h"
#include "CoreBaseHudWidget.h"
#include "EndGameCollapseBarViewInterface.h"
#include "CoreEndGameCollapseBarWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreEndGameCollapseBarWidget : public UCoreBaseHudWidget, public IEndGameCollapseBarViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _progressBarInterpSpeed;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void UpdateBarProgression(const float progress);

	UFUNCTION(BlueprintImplementableEvent)
	void PlayToZeroAnimation();

public:
	UCoreEndGameCollapseBarWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreEndGameCollapseBarWidget) { return 0; }
