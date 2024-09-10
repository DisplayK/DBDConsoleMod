#include "UMGTallyBonusVisualWidget.h"

UUMGTallyBonusVisualWidget::UUMGTallyBonusVisualWidget()
{
	this->MultiplierTextureMap = TMap<int32, TSoftObjectPtr<UTexture2D>>();
	this->MultiplierImage = NULL;
}
