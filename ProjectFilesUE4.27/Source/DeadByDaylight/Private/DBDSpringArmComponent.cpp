#include "DBDSpringArmComponent.h"

class AActor;

void UDBDSpringArmComponent::IgnoreActor(AActor* Actor, bool bShouldIgnore)
{

}

void UDBDSpringArmComponent::ClearIgnoreActors()
{

}

UDBDSpringArmComponent::UDBDSpringArmComponent()
{
	this->bEnableComponentwiseCameraLag = false;
	this->TargetArmMinLength = 0.000000;
	this->bEnableDistanceCameraLag = false;
	this->CameraDistanceLagSpeed = 0.000000;
	this->bDrawDebugTraceMarkers = false;
	this->IgnoreActors = TArray<TWeakObjectPtr<AActor>>();
}
