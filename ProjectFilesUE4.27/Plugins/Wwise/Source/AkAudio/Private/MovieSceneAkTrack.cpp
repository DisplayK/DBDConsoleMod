#include "MovieSceneAkTrack.h"

UMovieSceneAkTrack::UMovieSceneAkTrack() : UMovieSceneTrack(FObjectInitializer::Get())
{
	this->Sections = TArray<UMovieSceneSection*>();
	this->bIsAMasterTrack = false;
}
