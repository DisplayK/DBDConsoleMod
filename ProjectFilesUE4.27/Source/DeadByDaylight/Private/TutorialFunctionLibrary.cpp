#include "TutorialFunctionLibrary.h"

class UObject;
class ATutorialGameMode;
class UTutorialObjectiveController;
class ATutorialGameState;
class UTutorialNotificationController;
class UTutorialHighlightController;

bool UTutorialFunctionLibrary::IsInTutorial(const UObject* WorldContextObject)
{
	return false;
}

UTutorialObjectiveController* UTutorialFunctionLibrary::GetTutorialObjectiveController(UObject* WorldContextObject)
{
	return NULL;
}

UTutorialNotificationController* UTutorialFunctionLibrary::GetTutorialNotificationController(UObject* WorldContextObject)
{
	return NULL;
}

UTutorialHighlightController* UTutorialFunctionLibrary::GetTutorialHighlightController(UObject* WorldContextObject)
{
	return NULL;
}

ATutorialGameState* UTutorialFunctionLibrary::GetTutorialGameState(UObject* WorldContextObject)
{
	return NULL;
}

ATutorialGameMode* UTutorialFunctionLibrary::GetTutorialGameMode(UObject* WorldContextObject)
{
	return NULL;
}

UTutorialFunctionLibrary::UTutorialFunctionLibrary()
{

}
