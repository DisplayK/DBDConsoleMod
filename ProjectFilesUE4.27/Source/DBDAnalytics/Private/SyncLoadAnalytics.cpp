#include "SyncLoadAnalytics.h"

FSyncLoadAnalytics::FSyncLoadAnalytics()
{
	this->AssetName = TEXT("");
	this->LoadTimeMilliseconds = 0.0f;
	this->DeviceProfileName = TEXT("");
	this->BuildConfiguration = TEXT("");
	this->ChangelistNumber = 0;
	this->MapName = TEXT("");
	this->GameFlowContext = TEXT("");
}
