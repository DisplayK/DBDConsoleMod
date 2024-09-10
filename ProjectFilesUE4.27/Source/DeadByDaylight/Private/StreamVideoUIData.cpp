#include "StreamVideoUIData.h"

FStreamVideoUIData::FStreamVideoUIData()
{
	this->VideoURL = TEXT("");
	this->Language = TEXT("");
	this->HasAudio = false;
	this->ZOrderWidget = 0;
	this->StreamVideoWidgetAsset = NULL;
	this->MediaPlayerAsset = NULL;
}
