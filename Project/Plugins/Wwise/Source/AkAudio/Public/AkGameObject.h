#pragma once

#include "CoreMinimal.h"
#include "OnAkPostEventCallback.h"
#include "Components/SceneComponent.h"
#include "AkExternalSourceInfo.h"
#include "ERTPCValueType.h"
#include "Engine/LatentActionManager.h"
#include "AkGameObject.generated.h"

class UObject;
class UAkAudioEvent;
class UAkRtpc;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkGameObject : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* AkAudioEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EventName;

public:
	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void Stop();

	UFUNCTION(BlueprintPure=false, BlueprintCallable, BlueprintCosmetic)
	void SetRTPCValue(UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, const FString& RTPC) const;

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void PostAssociatedAkEventAsync(const UObject* WorldContextObject, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo, int32& PlayingID);

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	int32 PostAssociatedAkEvent(int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources);

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void PostAkEventAsync(const UObject* WorldContextObject, UAkAudioEvent* AkEvent, int32& PlayingID, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	int32 PostAkEvent(UAkAudioEvent* AkEvent, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, const FString& in_EventName);

	UFUNCTION(BlueprintPure, BlueprintCosmetic)
	void GetRTPCValue(UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, const FString& RTPC, int32 PlayingID) const;

public:
	UAkGameObject();
};

FORCEINLINE uint32 GetTypeHash(const UAkGameObject) { return 0; }
