#pragma once

#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneAkAudioRTPCTemplate.generated.h"

class UMovieSceneAkAudioRTPCSection;

USTRUCT()
struct FMovieSceneAkAudioRTPCTemplate: public FMovieSceneEvalTemplate
{
	GENERATED_BODY()

public:
	UPROPERTY(Export)
	UMovieSceneAkAudioRTPCSection* Section;

public:
	AKAUDIO_API FMovieSceneAkAudioRTPCTemplate();
};

FORCEINLINE uint32 GetTypeHash(const FMovieSceneAkAudioRTPCTemplate) { return 0; }
