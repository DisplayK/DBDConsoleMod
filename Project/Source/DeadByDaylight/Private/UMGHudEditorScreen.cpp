#include "UMGHudEditorScreen.h"
#include "EPlayerRole.h"

class UUMGHudEditorLayoutScreen;
class UUMGHudEditorVersionWidget;
class UUMGHudEditorLayoutWidget;
class UAkAudioEvent;

void UUMGHudEditorScreen::ShowHudLayout(EPlayerRole role)
{

}

void UUMGHudEditorScreen::SetWidgets_Implementation(UUMGHudEditorLayoutWidget* hudEditorLayoutWidget, UUMGHudEditorVersionWidget* versionSwapWidget)
{

}

void UUMGHudEditorScreen::SetEditorDropErrorOverlapSound(UAkAudioEvent* onDropOverlapSound)
{

}

void UUMGHudEditorScreen::RegisterEditorLayoutScreen(EPlayerRole role, UUMGHudEditorLayoutScreen* screen)
{

}

void UUMGHudEditorScreen::Quit()
{

}

UUMGHudEditorVersionWidget* UUMGHudEditorScreen::GetVersionSwapWidget() const
{
	return NULL;
}

UUMGHudEditorScreen::UUMGHudEditorScreen() : UUserWidget(FObjectInitializer::Get())
{
	this->_hudEditorLayoutWidget = NULL;
	this->_versionSwapWidget = NULL;
	this->_storedLayoutScreens = TMap<EPlayerRole, UUMGHudEditorLayoutScreen*>();
	this->_currentLayoutScreen = NULL;
	this->_onDropOverlapSound = NULL;
}
