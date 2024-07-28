#include "GeneratorDreamworldComponent.h"
#include "ESkillCheckCustomType.h"

class ADBDPlayer;

void UGeneratorDreamworldComponent::OnRepairSkillCheckFailed(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, bool hadInput, ESkillCheckCustomType type, float chargeChange)
{

}

UGeneratorDreamworldComponent::UGeneratorDreamworldComponent()
{
	this->_beamSocketsForBloodEffect = TArray<FName>();
}
