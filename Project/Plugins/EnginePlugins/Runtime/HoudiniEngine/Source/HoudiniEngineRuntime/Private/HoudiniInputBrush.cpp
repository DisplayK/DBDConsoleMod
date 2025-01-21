#include "HoudiniInputBrush.h"

UHoudiniInputBrush::UHoudiniInputBrush()
{
	this->BrushesInfo = TArray<FHoudiniBrushInfo>();
	this->CombinedModel = NULL;
	this->bIgnoreInputObject = false;
	this->CachedInputBrushType = Brush_Default;
}
