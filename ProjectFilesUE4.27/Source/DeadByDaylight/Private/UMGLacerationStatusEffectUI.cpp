#include "UMGLacerationStatusEffectUI.h"

void UUMGLacerationStatusEffectUI::OnFinishedBoomAnimation()
{

}

UUMGLacerationStatusEffectUI::UUMGLacerationStatusEffectUI()
{
	this->LacerationDecoration = NULL;
	this->LacerationFill = NULL;
	this->_maximumLacerationDefinitions = TArray<int32>();
	this->_lacerationDecorationImages = TArray<UPaperSprite*>();
	this->_lacerationFillImages = TArray<UTexture2D*>();
	this->_glassShatterDisintigrateAnimationName = TEXT("GlassShatter_Disintigrate");
	this->_lacerationFillFullMI = NULL;
}
