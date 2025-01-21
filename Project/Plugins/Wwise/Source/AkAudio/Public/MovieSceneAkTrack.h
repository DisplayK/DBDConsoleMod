#pragma once

#include "CoreMinimal.h"
#include "MovieSceneTrack.h"
#include "MovieSceneAkTrack.generated.h"

class UMovieSceneSection;

UCLASS(MinimalAPI, Abstract)
class UMovieSceneAkTrack : public UMovieSceneTrack
{
	GENERATED_BODY()

protected:
	UPROPERTY(Export)
	TArray<UMovieSceneSection*> Sections;

	UPROPERTY()
	uint8 bIsAMasterTrack : 1;

public:
	UMovieSceneAkTrack();
};

FORCEINLINE uint32 GetTypeHash(const UMovieSceneAkTrack) { return 0; }
