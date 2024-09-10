#include "UMGTallyEmblemMarker.h"

UUMGTallyEmblemMarker::UUMGTallyEmblemMarker()
{
	this->QualityImage = NULL;
	this->_qualityImages = TMap<EEmblemQuality, FEmblemQualityImages>();
}
