#include "PlatformDlcData.h"

FPlatformDlcData::FPlatformDlcData()
{
	this->ID = TEXT("");
	this->UnlockDescription = FText::GetEmpty();
	this->Description = TEXT("");
	this->UISortOrder = 0;
	this->DlcIdSteam = TEXT("");
	this->DlcIdEpic = TEXT("");
	this->DlcIdDmm = TEXT("");
	this->DlcIdPS4 = TEXT("");
	this->DlcIdXB1 = TEXT("");
	this->DlcIdXSX = TEXT("");
	this->DlcIdSwitch = TEXT("");
	this->DlcIdGRDK = TEXT("");
	this->DlcIdPS5 = TEXT("");
	this->DlcIdStadia = TEXT("");
	this->DlcIdMobile = TEXT("");
}
