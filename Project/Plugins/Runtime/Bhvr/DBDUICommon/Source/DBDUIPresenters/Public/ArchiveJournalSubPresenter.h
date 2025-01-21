#pragma once

#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "UObject/ScriptInterface.h"
#include "ArchiveJournalSubPresenter.generated.h"

class IArchiveJournalViewInterface;

UCLASS()
class DBDUIPRESENTERS_API UArchiveJournalSubPresenter : public USubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TScriptInterface<IArchiveJournalViewInterface> _archiveJournalWidget;

private:
	UFUNCTION()
	void OnVignetteSelected(const FString& vignetteId);

	UFUNCTION()
	void OnPlayCinematic(const int32 index);

	UFUNCTION()
	void OnEntrySelected(int32 entryIndex);

	UFUNCTION()
	void OnClickPlayButton(int32 entryIndex);

	UFUNCTION()
	void OnAutoplayChanged(bool autoplayActive, int32 entryIndex);

public:
	UArchiveJournalSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UArchiveJournalSubPresenter) { return 0; }
