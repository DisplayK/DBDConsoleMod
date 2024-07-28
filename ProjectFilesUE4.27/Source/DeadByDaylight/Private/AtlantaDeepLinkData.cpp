#include "AtlantaDeepLinkData.h"

FAtlantaDeepLinkData::FAtlantaDeepLinkData()
{
	this->Url = TEXT("");
	this->DeepLink = EDeepLinkUid::NONE;
	this->HasCustomParameters = false;
}
