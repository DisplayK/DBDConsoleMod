#include "VideoThumbnailProperties.h"

FVideoThumbnailProperties::FVideoThumbnailProperties()
{
	this->_id = NAME_None;
	this->_hasAudio = false;
	this->_size = FVector2D{};
	this->_source = NULL;
}
