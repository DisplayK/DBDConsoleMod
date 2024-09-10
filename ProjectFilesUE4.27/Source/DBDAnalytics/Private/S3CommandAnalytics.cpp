#include "S3CommandAnalytics.h"

FS3CommandAnalytics::FS3CommandAnalytics()
{
	this->RequestContentLength = 0;
	this->ContentType = TEXT("");
	this->ElapsedTime = 0.0f;
	this->Status = TEXT("");
	this->URL = TEXT("");
	this->Verb = TEXT("");
	this->ResponseContentLength = 0;
	this->ResponseCode = 0;
	this->Success = false;
}
