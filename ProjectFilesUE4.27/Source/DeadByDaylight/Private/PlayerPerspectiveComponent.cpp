#include "PlayerPerspectiveComponent.h"

class APawn;
class AController;

void UPlayerPerspectiveComponent::UpdateLocallyObserved()
{

}

void UPlayerPerspectiveComponent::OnPawnControllerChanged(APawn* pawn, AController* oldController, AController* newController)
{

}

bool UPlayerPerspectiveComponent::IsLocallyObserved() const
{
	return false;
}

UPlayerPerspectiveComponent::UPlayerPerspectiveComponent()
{

}
