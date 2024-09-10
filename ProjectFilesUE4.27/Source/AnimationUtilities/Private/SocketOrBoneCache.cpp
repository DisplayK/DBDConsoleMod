#include "SocketOrBoneCache.h"

FSocketOrBoneCache::FSocketOrBoneCache()
{
	this->_sourceAnimation = NULL;
	this->_socketName = NAME_None;
	this->_notifyName = NAME_None;
	this->_location = FVector{};
	this->_rotation = FRotator{};
}
