#include "DBDReflectionCaptureSpawnerComponent.h"

void UDBDReflectionCaptureSpawnerComponent::SetIBLMultiplicator(float IBLMultiplicatorNew)
{

}

void UDBDReflectionCaptureSpawnerComponent::SetContributionFactor(float contributionFactorNew)
{

}

void UDBDReflectionCaptureSpawnerComponent::SetBrightness(float brightnessNew)
{

}

UDBDReflectionCaptureSpawnerComponent::UDBDReflectionCaptureSpawnerComponent()
{
	this->ReflectionSourceType = EReflectionSourceType::CapturedScene;
	this->Cubemap = NULL;
	this->SourceCubemapAngle = 0.000000;
	this->Brightness = 1.000000;
	this->ContributionFactor = 0.000000;
	this->IBLMultiplicator = 1.000000;
	this->bCanBeTinted = true;
	this->SpawnedReflectionCaptures = TArray<AReflectionCapture*>();
	this->SpawnedReflectionCaptureComponents = TArray<UReflectionCaptureComponent*>();
}
