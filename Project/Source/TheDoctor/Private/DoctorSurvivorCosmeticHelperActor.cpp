#include "DoctorSurvivorCosmeticHelperActor.h"

class APallet;
class USurvivorMadnessEffect;
class AIllusionaryDoctor;

bool ADoctorSurvivorCosmeticHelperActor::IsSurvivorOperatingLocker() const
{
	return false;
}

USurvivorMadnessEffect* ADoctorSurvivorCosmeticHelperActor::GetSurvivorMadnessEffect() const
{
	return NULL;
}

AIllusionaryDoctor* ADoctorSurvivorCosmeticHelperActor::GetIllusionaryDoctor() const
{
	return NULL;
}

bool ADoctorSurvivorCosmeticHelperActor::CanPlayShockedAnimation() const
{
	return false;
}

bool ADoctorSurvivorCosmeticHelperActor::CanPlayOverwhelmingMadnessAudio() const
{
	return false;
}

bool ADoctorSurvivorCosmeticHelperActor::CanPlayOverwhelmingMadnessAnimation() const
{
	return false;
}

bool ADoctorSurvivorCosmeticHelperActor::CanPlayerSeeIllusionaryPalletGlitch(APallet* pallet) const
{
	return false;
}

ADoctorSurvivorCosmeticHelperActor::ADoctorSurvivorCosmeticHelperActor()
{

}
