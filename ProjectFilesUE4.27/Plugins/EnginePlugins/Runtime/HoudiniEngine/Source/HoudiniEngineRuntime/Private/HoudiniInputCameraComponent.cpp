#include "HoudiniInputCameraComponent.h"

UHoudiniInputCameraComponent::UHoudiniInputCameraComponent()
{
	this->FOV = 0.000000;
	this->AspectRatio = 1.000000;
	this->bIsOrthographic = false;
	this->OrthoWidth = 2.000000;
	this->OrthoNearClipPlane = 0.000000;
	this->OrthoFarClipPlane = -1.000000;
}
