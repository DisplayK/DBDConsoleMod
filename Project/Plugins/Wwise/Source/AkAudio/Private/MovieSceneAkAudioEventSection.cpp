#include "MovieSceneAkAudioEventSection.h"

UMovieSceneAkAudioEventSection::UMovieSceneAkAudioEventSection()
{
	this->Event = NULL;
	this->RetriggerEvent = false;
	this->ScrubTailLengthMs = 100;
	this->StopAtSectionEnd = true;
	this->EventName = TEXT("");
	this->MaxSourceDuration = -1.000000;
	this->MaxDurationSourceID = TEXT("");
}
