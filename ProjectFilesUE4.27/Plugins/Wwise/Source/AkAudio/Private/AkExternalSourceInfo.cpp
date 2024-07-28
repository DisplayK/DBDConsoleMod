#include "AkExternalSourceInfo.h"

FAkExternalSourceInfo::FAkExternalSourceInfo()
{
	this->ExternalSrcName = TEXT("");
	this->CodecID = AkCodecId::None;
	this->FileName = TEXT("");
	this->ExternalSourceAsset = NULL;
	this->IsStreamed = false;
}
