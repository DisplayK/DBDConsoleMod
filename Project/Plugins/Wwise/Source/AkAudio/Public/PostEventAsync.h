#pragma once

#include "CoreMinimal.h"
#include "AkExternalSourceInfo.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "PostEventAsyncOutputPin.h"
#include "OnAkPostEventCallback.h"
#include "PostEventAsync.generated.h"

class UPostEventAsync;
class UAkAudioEvent;
class UObject;
class AActor;

UCLASS()
class AKAUDIO_API UPostEventAsync : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FPostEventAsyncOutputPin Completed;

public:
	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	static UPostEventAsync* PostEventAsync(const UObject* WorldContextObject, UAkAudioEvent* AkEvent, AActor* Actor, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed);

private:
	UFUNCTION()
	void PollPostEventFuture();

public:
	UPostEventAsync();
};

FORCEINLINE uint32 GetTypeHash(const UPostEventAsync) { return 0; }
