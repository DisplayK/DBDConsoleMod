#include "ChallengeTrackerViewData.h"

FChallengeTrackerViewData::FChallengeTrackerViewData()
{
	this->ChallengeTitle = FText::GetEmpty();
	this->ProgressionData = FArchiveNodeObjectiveViewData{};
}
