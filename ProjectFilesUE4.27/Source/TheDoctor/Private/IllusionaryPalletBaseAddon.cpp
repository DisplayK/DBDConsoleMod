#include "IllusionaryPalletBaseAddon.h"
#include "Engine/EngineTypes.h"

class APallet;
class UPrimitiveComponent;
class ADBDPlayer;
class AActor;

void UIllusionaryPalletBaseAddon::Multicast_DeactivateIllusionaryPallet_Implementation(APallet* pallet, ADBDPlayer* triggeringPlayer)
{

}

void UIllusionaryPalletBaseAddon::Multicast_ActivateIllusionaryPallet_Implementation(APallet* pallet, bool isPalletDown)
{

}

void UIllusionaryPalletBaseAddon::Authority_OnIllusionaryPalletActorOverlapped(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{

}

UIllusionaryPalletBaseAddon::UIllusionaryPalletBaseAddon()
{
	this->_illusionaryPalletInterval = 20.000000;
	this->_palletComponentClass = NULL;
}
