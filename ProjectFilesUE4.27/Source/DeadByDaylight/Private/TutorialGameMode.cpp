#include "TutorialGameMode.h"

class UAtlantaTutorialPlayerHudController;
class AGenerator;
class UTutorialObjectiveController;
class UTutorialNotificationController;
class UTutorialHighlightController;

void ATutorialGameMode::SetEscapeGenerators(const TArray<AGenerator*>& escapeGenerators, int32 requiredActivationCount)
{

}

void ATutorialGameMode::SetEscapeActivated()
{

}

UTutorialObjectiveController* ATutorialGameMode::GetTutorialObjectiveController() const
{
	return NULL;
}

UTutorialNotificationController* ATutorialGameMode::GetTutorialNotificationController() const
{
	return NULL;
}

UTutorialHighlightController* ATutorialGameMode::GetTutorialHighlightController() const
{
	return NULL;
}

UAtlantaTutorialPlayerHudController* ATutorialGameMode::GetAtlantaTutorialPlayerHudController() const
{
	return NULL;
}

ATutorialGameMode::ATutorialGameMode()
{
	this->_tutorialObjectiveController = NULL;
	this->_tutorialNotificationController = NULL;
	this->_tutorialHighlightController = NULL;
	this->_atlantaTutorialPlayerHudController = NULL;
}
