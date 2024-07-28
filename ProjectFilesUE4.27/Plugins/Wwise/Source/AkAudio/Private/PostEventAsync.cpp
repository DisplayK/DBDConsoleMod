#include "PostEventAsync.h"
#include "OnAkPostEventCallback.h"
#include "AkExternalSourceInfo.h"

class UAkAudioEvent;
class UObject;
class UPostEventAsync;
class AActor;

UPostEventAsync* UPostEventAsync::PostEventAsync(const UObject* WorldContextObject, UAkAudioEvent* AkEvent, AActor* Actor, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed)
{
	return NULL;
}

void UPostEventAsync::PollPostEventFuture()
{

}

UPostEventAsync::UPostEventAsync()
{

}
