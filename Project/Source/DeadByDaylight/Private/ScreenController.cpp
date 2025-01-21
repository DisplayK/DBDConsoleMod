#include "ScreenController.h"

UScreenController::UScreenController()
{
	this->_gameInstance = NULL;
	this->_screenControllerObj = NULL;
	this->_moviePlayer = NULL;
	this->_screenDictionary = TMap<FString, UScreenBase*>();
	this->_screenTypeDictionary = TMap<FString, EScreenType>();
	this->_cachedUMGScreens = TMap<UClass*, TWeakObjectPtr<UUserWidget>>();
}
