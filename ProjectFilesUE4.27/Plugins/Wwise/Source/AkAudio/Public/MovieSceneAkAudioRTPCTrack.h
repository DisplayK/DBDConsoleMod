#pragma once

#include "CoreMinimal.h"
#include "MovieSceneAkTrack.h"
#include "MovieSceneAkAudioRTPCTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{
	GENERATED_BODY()

public:
	UMovieSceneAkAudioRTPCTrack();
};

FORCEINLINE uint32 GetTypeHash(const UMovieSceneAkAudioRTPCTrack) { return 0; }
