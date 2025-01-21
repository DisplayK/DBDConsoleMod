#include "AkAcousticPortal.h"
#include "AkPortalComponent.h"
#include "AkAcousticPortalState.h"

void AAkAcousticPortal::OpenPortal()
{

}

AkAcousticPortalState AAkAcousticPortal::GetCurrentState() const
{
	return AkAcousticPortalState::Closed;
}

void AAkAcousticPortal::ClosePortal()
{

}

AAkAcousticPortal::AAkAcousticPortal()
{
	this->Portal = CreateDefaultSubobject<UAkPortalComponent>(TEXT("PortalComponent"));
	this->InitialState = AkAcousticPortalState::Closed;
	this->bRequiresStateMigration = false;
}
