#include "S33P02.h"
#include "Net/UnrealNetwork.h"

void US33P02::OnRep_ReassuredSurvivors()
{

}

void US33P02::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(US33P02, _reassuredSurvivors);
}

US33P02::US33P02()
{
	this->_distanceRadius = 600.000000;
	this->_struggleProgressionPausedDuration = 0.000000;
	this->_S33P02StatusEffect = NULL;
	this->_reassuredSurvivors = TArray<ACamperPlayer*>();
}
