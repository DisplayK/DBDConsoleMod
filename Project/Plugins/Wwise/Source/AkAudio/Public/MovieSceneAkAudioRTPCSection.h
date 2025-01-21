#pragma once

#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "Curves/RichCurve.h"
#include "MovieSceneFloatChannelSerializationHelper.h"
#include "MovieSceneAkAudioRTPCSection.generated.h"

class UAkRtpc;

UCLASS()
class AKAUDIO_API UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	UAkRtpc* RTPC;

	UPROPERTY(EditAnywhere)
	FString Name;

	UPROPERTY()
	FRichCurve FloatCurve;

	UPROPERTY()
	FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper;

	UPROPERTY()
	FMovieSceneFloatChannel RTPCChannel;

public:
	UMovieSceneAkAudioRTPCSection();
};

FORCEINLINE uint32 GetTypeHash(const UMovieSceneAkAudioRTPCSection) { return 0; }
