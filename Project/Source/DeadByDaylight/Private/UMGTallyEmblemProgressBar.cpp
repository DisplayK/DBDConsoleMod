#include "UMGTallyEmblemProgressBar.h"

UUMGTallyEmblemProgressBar::UUMGTallyEmblemProgressBar()
{
	this->ProgressBar = NULL;
	this->QualityContainer = NULL;
	this->EmblemQualityClass = NULL;
	this->_qualityFillImages = TMap<EEmblemQuality, FSlateBrush>();
}
