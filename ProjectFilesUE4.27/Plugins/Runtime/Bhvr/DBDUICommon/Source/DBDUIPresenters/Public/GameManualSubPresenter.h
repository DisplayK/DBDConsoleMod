#pragma once

#include "CoreMinimal.h"
#include "EHelpType.h"
#include "SubPresenter.h"
#include "UObject/ScriptInterface.h"
#include "GameManualSubPresenter.generated.h"

class IGameManualViewInterface;

UCLASS()
class DBDUIPRESENTERS_API UGameManualSubPresenter : public USubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TScriptInterface<IGameManualViewInterface> _gameManualWidget;

private:
	UFUNCTION()
	void OnCategoryCategoryEntered(EHelpType categoryType);

public:
	UGameManualSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UGameManualSubPresenter) { return 0; }
