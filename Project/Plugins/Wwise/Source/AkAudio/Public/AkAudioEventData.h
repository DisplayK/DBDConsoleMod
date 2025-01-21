#pragma once

#include "CoreMinimal.h"
#include "AkAssetDataSwitchContainer.h"
#include "AkAudioEventData.generated.h"

class UAkAudioEvent;
class UAkAuxBus;
class UAkGroupValue;
class UAkTrigger;

UCLASS(BlueprintType)
class AKAUDIO_API UAkAudioEventData : public UAkAssetDataSwitchContainer
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float MaxAttenuationRadius;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool IsInfinite;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float MinimumDuration;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float MaximumDuration;

	UPROPERTY(VisibleAnywhere)
	TMap<FString, UAkAssetDataSwitchContainer*> LocalizedMedia;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TSet<UAkAudioEvent*> PostedEvents;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TSet<UAkAuxBus*> UserDefinedSends;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TSet<UAkTrigger*> PostedTriggers;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TSet<UAkGroupValue*> GroupValues;

public:
	UAkAudioEventData();
};

FORCEINLINE uint32 GetTypeHash(const UAkAudioEventData) { return 0; }
