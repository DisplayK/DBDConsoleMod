#pragma once

#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "UObject/ScriptInterface.h"
#include "EArchiveTomeMenuState.h"
#include "ArchiveTomeSubPresenter.generated.h"

class UMaterialInterface;
class UArchiveQuestMapSubPresenter;
class UArchiveEditorSubPresenter;
class UArchiveJournalSubPresenter;
class IArchiveTomeViewInterface;

UCLASS()
class DBDUIPRESENTERS_API UArchiveTomeSubPresenter : public USubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UArchiveQuestMapSubPresenter* _archiveQuestMapSubPresenter;

	UPROPERTY(Transient)
	UArchiveEditorSubPresenter* _archiveEditorSubPresenter;

	UPROPERTY(Transient)
	UArchiveJournalSubPresenter* _archiveJournalSubPresenter;

	UPROPERTY(Transient)
	USubPresenter* _activeSubPresenter;

	UPROPERTY(Transient)
	TScriptInterface<IArchiveTomeViewInterface> _archiveTomeWidget;

	UPROPERTY(Transient)
	UMaterialInterface* _archiveSideNavSkinMaterial;

public:
	UFUNCTION()
	void OnMenuTabSelected(EArchiveTomeMenuState menuState);

private:
	UFUNCTION()
	void OnEditorWidgetSwitchComplete();

public:
	UArchiveTomeSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UArchiveTomeSubPresenter) { return 0; }
