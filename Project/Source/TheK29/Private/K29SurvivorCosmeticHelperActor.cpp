#include "K29SurvivorCosmeticHelperActor.h"

class ACamperPlayer;

void AK29SurvivorCosmeticHelperActor::OnSurvivorGrabbed(ACamperPlayer* survivor)
{

}

void AK29SurvivorCosmeticHelperActor::OnOwnerLocallyObserved(bool locallyObserved)
{

}

void AK29SurvivorCosmeticHelperActor::OnLevelReadyToPlay()
{

}

void AK29SurvivorCosmeticHelperActor::OnInfectionRemovalCollectableUsed(ACamperPlayer* survivor)
{

}

void AK29SurvivorCosmeticHelperActor::OnInfectionLevelsChanged(ACamperPlayer* targetSurvivor, bool isActive)
{

}

bool AK29SurvivorCosmeticHelperActor::IsInfectionIncubated() const
{
	return false;
}

bool AK29SurvivorCosmeticHelperActor::IsInfectionCritical() const
{
	return false;
}

bool AK29SurvivorCosmeticHelperActor::IsInfectionActive() const
{
	return false;
}

bool AK29SurvivorCosmeticHelperActor::IsInfected() const
{
	return false;
}

int32 AK29SurvivorCosmeticHelperActor::GetMaximumInfectionLevels() const
{
	return 0;
}

float AK29SurvivorCosmeticHelperActor::GetCurrentInfectionPercentage() const
{
	return 0.0f;
}

int32 AK29SurvivorCosmeticHelperActor::GetCurrentInfectionLevels() const
{
	return 0;
}

AK29SurvivorCosmeticHelperActor::AK29SurvivorCosmeticHelperActor()
{

}
