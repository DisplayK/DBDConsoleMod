#include "LRUTextureCache.h"

FLRUTextureCache::FLRUTextureCache()
{
	this->_cachedTextures = TMap<FName, UTexture2DDynamic*>();
}
