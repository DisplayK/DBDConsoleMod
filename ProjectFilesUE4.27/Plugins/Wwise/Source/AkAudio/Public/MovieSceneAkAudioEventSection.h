#pragma once

#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "MovieSceneAkAudioEventSection.generated.h"

class UAkAudioEvent;

UCLASS(MinimalAPI)
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	UAkAudioEvent* Event;

	UPROPERTY(EditAnywhere)
	bool RetriggerEvent;

	UPROPERTY(EditAnywhere)
	int32 ScrubTailLengthMs;

	UPROPERTY(EditAnywhere)
	bool StopAtSectionEnd;

	UPROPERTY(EditAnywhere)
	FString EventName;

	UPROPERTY(VisibleAnywhere)
	float MaxSourceDuration;

	UPROPERTY()
	FString MaxDurationSourceID;

public:
	UMovieSceneAkAudioEventSection();
};

FORCEINLINE uint32 GetTypeHash(const UMovieSceneAkAudioEventSection) { return 0; }
