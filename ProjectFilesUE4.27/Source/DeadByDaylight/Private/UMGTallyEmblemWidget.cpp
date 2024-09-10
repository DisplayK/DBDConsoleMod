#include "UMGTallyEmblemWidget.h"

UUMGTallyEmblemWidget::UUMGTallyEmblemWidget()
{
	this->_emblemBackgrounds = TMap<EEmblemQuality, UTexture2D*>();
	this->BackgroundImage = NULL;
	this->IconImage = NULL;
}
