#include "NavLinkInteractPlayerSetup.h"

FNavLinkInteractPlayerSetup::FNavLinkInteractPlayerSetup()
{
	this->Input = EPawnInputPressTypes::None;
	this->InteractionIds = TArray<FString>();
	this->InputTimeDeviationInChase = FAITunableParameter{};
}
