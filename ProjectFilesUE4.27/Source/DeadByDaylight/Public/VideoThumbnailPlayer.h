#pragma once

#include "CoreMinimal.h"
#include "VideoPlayer.h"
#include "UObject/SoftObjectPtr.h"
#include "GameFramework/Actor.h"
#include "VideoThumbnailPlayer.generated.h"

class UAudioComponent;
class UMediaPlayer;
class UMediaSource;
class UMediaSoundComponent;
class UUserWidget;

UCLASS()
class DEADBYDAYLIGHT_API AVideoThumbnailPlayer : public AActor, public IVideoPlayer
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UMediaPlayer* MediaPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	UMediaSoundComponent* SoundComponent;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UUserWidget* VideoPlayerWidget;

private:
	UPROPERTY(Transient, Export)
	UAudioComponent* _audioComponent;

	UPROPERTY(Transient)
	TSoftObjectPtr<UMediaSource> _source;

private:
	UFUNCTION()
	void OnVideoAssetLoaded();

	UFUNCTION()
	void OnMediaOpened(const FString& openedUrl);

	UFUNCTION()
	void OnMediaClosed();

	UFUNCTION()
	void OnEndReached();

public:
	AVideoThumbnailPlayer();
};

FORCEINLINE uint32 GetTypeHash(const AVideoThumbnailPlayer) { return 0; }
