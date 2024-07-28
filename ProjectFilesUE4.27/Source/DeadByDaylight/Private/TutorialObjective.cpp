#include "TutorialObjective.h"

FTutorialObjective::FTutorialObjective()
{
	this->Description = FText::GetEmpty();
	this->IsCompletionAnalyticEnabled = false;
	this->InteractionPromptType = EInteractionPromptType::PressButton;
	this->PlayerAction = ETutorialObjectivePlayerActionMapping::None;
	this->SecondaryInteractionPromptType = EInteractionPromptType::PressButton;
	this->SecondaryPlayerAction = ETutorialObjectivePlayerActionMapping::None;
}
