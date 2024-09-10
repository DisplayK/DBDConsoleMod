#include "SurvivorReelVelocityAdditiveStrategy.h"
#include "Net/UnrealNetwork.h"

class ASlasherPlayer;

void USurvivorReelVelocityAdditiveStrategy::OnKillerSet(ASlasherPlayer* killer)
{

}

void USurvivorReelVelocityAdditiveStrategy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USurvivorReelVelocityAdditiveStrategy, _isBeingReeled);
	DOREPLIFETIME(USurvivorReelVelocityAdditiveStrategy, _isBeingPulled);
}

USurvivorReelVelocityAdditiveStrategy::USurvivorReelVelocityAdditiveStrategy()
{
	this->_minimumLinkLengthDelta = 15.000000;
	this->_maximumVelocityAdditive = 350.000000;
}
