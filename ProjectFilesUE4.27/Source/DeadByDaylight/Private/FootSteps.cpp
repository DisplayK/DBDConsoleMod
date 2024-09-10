#include "FootSteps.h"
#include "UObject/NoExportTypes.h"

class AActor;

void AFootSteps::OnLoudNoiseTriggered(AActor* originator, AActor* instigatingActor, FVector location, bool shouldTrack, float& audibleRange, bool isQuickAction, bool isDeceivingNoise)
{

}

AFootSteps::AFootSteps()
{
	this->_raycastHalfAngle = 165.000000;
	this->_raycastZOffset = 120.000000;
	this->_raycastDistance = 360.000000;
	this->_material = NULL;
	this->_minimumDecalSize = 200.000000;
	this->_maximumDecalSize = 240.000000;
	this->_projectionTickness = 20.000000;
	this->_visibilityMultiplierInterpSpeed = 1.000000;
	this->_fadeCurve = NULL;
	this->_veinsCurve = NULL;
	this->_footSteps = TMap<UDBDDecalComponent*, FFootStep>();
	this->_decalSpawner = NULL;
}
