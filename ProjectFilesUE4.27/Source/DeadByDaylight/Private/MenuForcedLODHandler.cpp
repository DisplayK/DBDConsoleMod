#include "MenuForcedLODHandler.h"
#include "Engine/EngineTypes.h"
#include "ECustomizationCategory.h"

class AActor;
class ADBDMenuPlayer;

void UMenuForcedLODHandler::OnMenuPlayerEndPlay(AActor* menuPlayerActor, TEnumAsByte<EEndPlayReason::Type> endPlayReason)
{

}

void UMenuForcedLODHandler::OnCustomizationChanged(ECustomizationCategory category, const FName& itemId, bool isVfxVisible, ADBDMenuPlayer* menuPlayer)
{

}

UMenuForcedLODHandler::UMenuForcedLODHandler()
{
	this->_forcedLOD0GameFlowSteps = TArray<EGameFlowStep>();
}
