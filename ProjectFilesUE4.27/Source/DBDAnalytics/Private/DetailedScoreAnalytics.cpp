#include "DetailedScoreAnalytics.h"

FDetailedScoreAnalytics::FDetailedScoreAnalytics()
{
	this->ScorerMirrorsId = TEXT("");
	this->TargetMirrorsId = TEXT("");
	this->MatchId = TEXT("");
	this->ScoreTypeId = NAME_None;
	this->ScoreExperience = 0;
	this->ElapsedMatchTime = 0.0f;
	this->InstigatorCoordinateX = 0.0f;
	this->InstigatorCoordinateY = 0.0f;
	this->InstigatorCoordinateZ = 0.0f;
	this->TargetCoordinateX = 0.0f;
	this->TargetCoordinateY = 0.0f;
	this->TargetCoordinateZ = 0.0f;
}
