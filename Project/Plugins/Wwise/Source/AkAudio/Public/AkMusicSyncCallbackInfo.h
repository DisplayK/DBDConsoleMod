#pragma once

#include "CoreMinimal.h"
#include "AkSegmentInfo.h"
#include "AkCallbackInfo.h"
#include "EAkCallbackType.h"
#include "AkMusicSyncCallbackInfo.generated.h"

UCLASS()
class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 PlayingID;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FAkSegmentInfo SegmentInfo;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EAkCallbackType MusicSyncType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString UserCueName;

public:
	UAkMusicSyncCallbackInfo();
};

FORCEINLINE uint32 GetTypeHash(const UAkMusicSyncCallbackInfo) { return 0; }
