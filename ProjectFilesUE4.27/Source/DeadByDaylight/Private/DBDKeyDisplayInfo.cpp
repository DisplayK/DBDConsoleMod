#include "DBDKeyDisplayInfo.h"
#include "KeyDisplayInfo.h"
#include "EPlayerRole.h"
#include "InputCoreTypes.h"
#include "EInputInteractionType.h"

class UPlayerInput;

bool UDBDKeyDisplayInfo::IsExcludedKey(FKey key)
{
	return false;
}

FKeyDisplayInfo UDBDKeyDisplayInfo::GetKeyDisplayInfoForInteractionType(UPlayerInput* playerInput, EPlayerRole playerRole, EInputInteractionType interactionType, bool useGamePad)
{
	return FKeyDisplayInfo{};
}

FKeyDisplayInfo UDBDKeyDisplayInfo::GetKeyDisplayInfo(FKey key)
{
	return FKeyDisplayInfo{};
}

FKey UDBDKeyDisplayInfo::GetFirstKeyForAction(UPlayerInput* playerInput, FName actionName, bool useGamePad)
{
	return FKey{};
}

FName UDBDKeyDisplayInfo::GetActionForInteractionType(EPlayerRole playerRole, EInputInteractionType inputInteractionType, bool useGamePad, bool ignoreInteractMash)
{
	return NAME_None;
}

UDBDKeyDisplayInfo::UDBDKeyDisplayInfo()
{
	this->_keyDisplayInfoMap = TMap<FName, FKeyDisplayInfo>();
	this->_interactionTypeToActionMap_Camper = TMap<EInputInteractionType, FName>();
	this->_interactionTypeToActionMap_Slasher = TMap<EInputInteractionType, FName>();
}
