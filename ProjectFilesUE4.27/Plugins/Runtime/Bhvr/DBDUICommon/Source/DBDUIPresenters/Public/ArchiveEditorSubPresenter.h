#pragma once

#include "CoreMinimal.h"
#include "ArchiveQuestMapSubPresenter.h"
#include "UObject/ScriptInterface.h"
#include "ArchiveNodeGraphViewData.h"
#include "ArchiveEditorSubPresenter.generated.h"

class IArchiveEditorViewInterface;

UCLASS()
class DBDUIPRESENTERS_API UArchiveEditorSubPresenter : public UArchiveQuestMapSubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TScriptInterface<IArchiveEditorViewInterface> _archiveEditorWidget;

private:
	UFUNCTION()
	void OnSaveTomeGraph(const TArray<FArchiveNodeGraphViewData>& nodeList);

public:
	UArchiveEditorSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UArchiveEditorSubPresenter) { return 0; }
