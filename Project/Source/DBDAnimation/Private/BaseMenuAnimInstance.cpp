#include "BaseMenuAnimInstance.h"
#include "EGameFlowStep.h"

class ADBDMenuPlayer;

ADBDMenuPlayer* UBaseMenuAnimInstance::GetOwningMenuPlayer() const
{
	return NULL;
}

EGameFlowStep UBaseMenuAnimInstance::GetCurrentMenu() const
{
	return EGameFlowStep::None;
}

UBaseMenuAnimInstance::UBaseMenuAnimInstance()
{

}
