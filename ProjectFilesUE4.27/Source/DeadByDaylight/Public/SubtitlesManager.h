#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OnAkPostEventCallback.h"
#include "AkExternalSourceInfo.h"
#include "AkEventWithSubtitle.h"
#include "SubtitlesManager.generated.h"

class UAkGameObject;
class UAkAudioEvent;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API USubtitlesManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	static int32 PostAkEventWithSubtitles(UAkGameObject* target, const TArray<FAkEventWithSubtitle>& akEventRandomizer, float maxSubtitleDistance, int32 callbackMask, const FOnAkPostEventCallback& postEventCallback, const TArray<FAkExternalSourceInfo>& externalSources, UAkAudioEvent*& akEventPlayed);

	UFUNCTION(BlueprintPure, BlueprintCosmetic)
	static bool IsDebuggingSubtitles();

public:
	USubtitlesManager();
};

FORCEINLINE uint32 GetTypeHash(const USubtitlesManager) { return 0; }
