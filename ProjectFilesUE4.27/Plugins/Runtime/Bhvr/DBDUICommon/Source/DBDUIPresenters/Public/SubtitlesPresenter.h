#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "SubtitlesEntry.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineTypes.h"
#include "SubtitlesPresenter.generated.h"

class UUserWidget;
class UNavigationScreen;

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API USubtitlesPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> SubtitlesWidgetClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 NumberOfCharactersPerLine;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float DurationPerLine;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool KeepSingleCharacter;

private:
	UPROPERTY(Transient)
	TArray<FSubtitlesEntry> _entryQueue;

	UPROPERTY(Transient)
	FTimerHandle _timerHandle;

	UPROPERTY(Transient)
	TWeakObjectPtr<UNavigationScreen> _navigationScreen;

private:
	UFUNCTION()
	void OnEntryTimedOut();

	UFUNCTION()
	bool IsSubtitlesEnabled() const;

public:
	USubtitlesPresenter();
};

FORCEINLINE uint32 GetTypeHash(const USubtitlesPresenter) { return 0; }
