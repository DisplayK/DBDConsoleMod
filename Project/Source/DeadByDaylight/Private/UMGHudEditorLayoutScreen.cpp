#include "UMGHudEditorLayoutScreen.h"

UUMGHudEditorLayoutScreen::UUMGHudEditorLayoutScreen() : UUserWidget(FObjectInitializer::Get())
{
	this->_editableWidgets = TArray<UUMGDragWidget_HudEditor*>();
}
