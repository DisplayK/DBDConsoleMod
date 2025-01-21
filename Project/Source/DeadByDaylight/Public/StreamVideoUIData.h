#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "StreamVideoUIData.generated.h"

class UUMGStreamVideoWidget;
class UMediaPlayer;

USTRUCT()
struct FStreamVideoUIData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	FString VideoURL;

	UPROPERTY(Transient)
	FString Language;

	UPROPERTY(Transient)
	bool HasAudio;

	UPROPERTY(Transient)
	int32 ZOrderWidget;

	UPROPERTY(Transient)
	TSoftClassPtr<UUMGStreamVideoWidget> StreamVideoWidgetAsset;

	UPROPERTY(Transient)
	TSoftObjectPtr<UMediaPlayer> MediaPlayerAsset;

public:
	DEADBYDAYLIGHT_API FStreamVideoUIData();
};

FORCEINLINE uint32 GetTypeHash(const FStreamVideoUIData) { return 0; }
