#pragma once

#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneAkAudioEventTemplate.generated.h"

class UMovieSceneAkAudioEventSection;

USTRUCT()
struct FMovieSceneAkAudioEventTemplate: public FMovieSceneEvalTemplate
{
	GENERATED_BODY()

public:
	UPROPERTY(Export)
	UMovieSceneAkAudioEventSection* Section;

public:
	AKAUDIO_API FMovieSceneAkAudioEventTemplate();
};

FORCEINLINE uint32 GetTypeHash(const FMovieSceneAkAudioEventTemplate) { return 0; }
