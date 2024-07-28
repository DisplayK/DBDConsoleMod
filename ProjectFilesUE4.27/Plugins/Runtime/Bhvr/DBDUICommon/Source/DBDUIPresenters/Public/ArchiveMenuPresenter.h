#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "EArchiveMenuState.h"
#include "EPlayerRole.h"
#include "ArchiveMenuPresenter.generated.h"

class UArchiveTomeSubPresenter;
class UArchiveRiftSubPresenter;
class UUserWidget;
class UArchiveCompendiumSubPresenter;
class USubPresenter;

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UArchiveMenuPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> ArchiveMenuWidgetClass;

private:
	UPROPERTY(Transient)
	UArchiveTomeSubPresenter* _archiveTomeSubPresenter;

	UPROPERTY(Transient)
	UArchiveRiftSubPresenter* _archiveRiftSubPresenter;

	UPROPERTY(Transient)
	UArchiveCompendiumSubPresenter* _archiveCompendiumSubPresenter;

	UPROPERTY(Transient)
	USubPresenter* _activeSubPresenter;

private:
	UFUNCTION()
	void OnSlotSelectorClosed();

	UFUNCTION()
	void OnMenuTabSelected(EArchiveMenuState menuState, bool alreadySelected);

	UFUNCTION()
	void OnInfoClicked();

	UFUNCTION()
	void OnChallengeReminderSlotSelected(EPlayerRole role);

	UFUNCTION()
	void OnChallengeReminderClicked(EPlayerRole role);

	UFUNCTION()
	void OnBackAction();

public:
	UArchiveMenuPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UArchiveMenuPresenter) { return 0; }
