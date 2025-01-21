#include "CameraFadeComponent.h"
#include "ECameraFadeState.h"

void UCameraFadeComponent::OnFadedOut()
{

}

void UCameraFadeComponent::OnFadedIn()
{

}

ECameraFadeState UCameraFadeComponent::GetCameraFadeState() const
{
	return ECameraFadeState::FadedIn;
}

UCameraFadeComponent::UCameraFadeComponent()
{

}
