#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ArchivesVignetteEntryViewData.h"
#include "ArchivesVignetteViewData.h"
#include "ArchiveJournalViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UArchiveJournalViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IArchiveJournalViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetVoiceOverPlaying(bool voiceOverPlaying);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetVoiceOverAutoplay(bool voiceOverAutoplay);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetVignetteList(const TArray<FArchivesVignetteViewData>& vignetteDataList);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetVignetteData(const FArchivesVignetteViewData& vignetteViewData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetEntryData(const FArchivesVignetteEntryViewData& entryViewData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetCinematicButtonsEnabled(bool enabled);

};
