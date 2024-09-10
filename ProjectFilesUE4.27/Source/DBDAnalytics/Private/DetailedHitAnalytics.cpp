#include "DetailedHitAnalytics.h"

FDetailedHitAnalytics::FDetailedHitAnalytics()
{
	this->MatchId = TEXT("");
	this->InstigatorMirrorsId = TEXT("");
	this->TargetMirrorsId = TEXT("");
	this->Ping = 0.0f;
	this->HitTimestamp = 0.0f;
	this->IsValidHit = false;
	this->IsValidDistance = false;
	this->IsValidCollision = false;
	this->RecorderCacheTimespan = 0.0f;
	this->MaximumDistance = 0.0f;
	this->CapsuleInflation = 0.0f;
	this->InstigatorName = TEXT("");
	this->HitPrimitiveName = TEXT("");
	this->InstigatorCoordinateX = 0.0f;
	this->InstigatorCoordinateY = 0.0f;
	this->InstigatorCoordinateZ = 0.0f;
	this->InstigatorRotationX = 0.0f;
	this->InstigatorRotationY = 0.0f;
	this->InstigatorRotationZ = 0.0f;
	this->TargetLocationInstigatorTimestamp = 0.0f;
	this->TargetCoordinateX = 0.0f;
	this->TargetCoordinateY = 0.0f;
	this->TargetCoordinateZ = 0.0f;
	this->Distance = 0.0f;
}
