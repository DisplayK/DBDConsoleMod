#include "SubtitlesManager.h"
#include "OnAkPostEventCallback.h"
#include "AkExternalSourceInfo.h"
#include "AkEventWithSubtitle.h"

class UAkGameObject;
class UAkAudioEvent;

int32 USubtitlesManager::PostAkEventWithSubtitles(UAkGameObject* target, const TArray<FAkEventWithSubtitle>& akEventRandomizer, float maxSubtitleDistance, int32 callbackMask, const FOnAkPostEventCallback& postEventCallback, const TArray<FAkExternalSourceInfo>& externalSources, UAkAudioEvent*& akEventPlayed)
{
	return 0;
}

bool USubtitlesManager::IsDebuggingSubtitles()
{
	return false;
}

USubtitlesManager::USubtitlesManager()
{

}
