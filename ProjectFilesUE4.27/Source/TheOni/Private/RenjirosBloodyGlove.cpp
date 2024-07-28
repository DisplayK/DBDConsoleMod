#include "RenjirosBloodyGlove.h"

class AActor;
class ABloodOrb;

void URenjirosBloodyGlove::Authority_OnBloodOrbOverlapBegin(const AActor* overlappingActor, const ABloodOrb* bloodOrb)
{

}

URenjirosBloodyGlove::URenjirosBloodyGlove()
{
	this->_revealTime = 0.000000;
	this->_revealEffectPerCamper = TMap<ACamperPlayer*, UBloodOrbOverlapRevealToKiller*>();
}
