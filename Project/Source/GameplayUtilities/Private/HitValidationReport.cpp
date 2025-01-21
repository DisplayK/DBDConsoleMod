#include "HitValidationReport.h"

FHitValidationReport::FHitValidationReport()
{
	this->InstigatorParams = FHitValidatorInstigatorParams{};
	this->TargetParams = FHitValidatorTargetParams{};
	this->ValidationTimestamp = 0.0f;
	this->TargetRecorderTimeRange = FFloatRange{};
	this->InstigatorOwningCharacter = NULL;
	this->MaximumDistance = 0.0f;
	this->CapsuleInflation = 0.0f;
	this->IsValidHit = false;
	this->IsValidDistance = false;
	this->IsValidNotStunned = false;
	this->InstigatorTransform = FTransform{};
	this->RewindedTargetLocation = FVector{};
	this->TargetLocation = FVector{};
	this->SquareDistance = 0.0f;
	this->HasPerformCollisionCheck = false;
	this->IsValidCollision = false;
	this->HitPrimitiveTransform = FTransform{};
	this->HittablePrimitiveTransform = FTransform{};
}
