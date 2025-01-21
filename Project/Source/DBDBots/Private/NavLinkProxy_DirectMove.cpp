#include "NavLinkProxy_DirectMove.h"

void ANavLinkProxy_DirectMove::OnDisplayDebugInfo()
{

}

ANavLinkProxy_DirectMove::ANavLinkProxy_DirectMove()
{
	this->CustomPathPoints = TArray<FVector>();
	this->MoveToPathPointTimeLimit = 3.000000;
	this->_playersOnPath = TMap<ADBDPlayer*, UNavMovePath*>();
}
