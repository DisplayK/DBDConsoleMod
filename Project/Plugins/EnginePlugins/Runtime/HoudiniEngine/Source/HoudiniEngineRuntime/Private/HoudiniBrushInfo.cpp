#include "HoudiniBrushInfo.h"

FHoudiniBrushInfo::FHoudiniBrushInfo()
{
	this->BrushActor = NULL;
	this->CachedTransform = FTransform{};
	this->CachedOrigin = FVector{};
	this->CachedExtent = FVector{};
	this->CachedBrushType = Brush_Default;
	this->CachedSurfaceHash = 0;
}
