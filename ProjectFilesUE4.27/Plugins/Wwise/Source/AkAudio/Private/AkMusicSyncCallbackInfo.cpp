#include "AkMusicSyncCallbackInfo.h"

UAkMusicSyncCallbackInfo::UAkMusicSyncCallbackInfo()
{
	this->PlayingID = 0;
	this->MusicSyncType = EAkCallbackType::EndOfEvent;
	this->UserCueName = TEXT("");
}
