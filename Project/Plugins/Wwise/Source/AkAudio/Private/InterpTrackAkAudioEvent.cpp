#include "InterpTrackAkAudioEvent.h"

UInterpTrackAkAudioEvent::UInterpTrackAkAudioEvent()
{
	this->Events = TArray<FAkAudioEventTrackKey>();
	this->bContinueEventOnMatineeEnd = false;
}
