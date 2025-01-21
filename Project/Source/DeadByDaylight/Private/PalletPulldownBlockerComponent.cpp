#include "PalletPulldownBlockerComponent.h"
#include "Net/UnrealNetwork.h"

class UObject;

void UPalletPulldownBlockerComponent::OnRep_PalletToBlock(UObject* oldPalletToBlock)
{

}

void UPalletPulldownBlockerComponent::Multicast_PalletPulldownBlockedShowCosmetic_Implementation(UObject* palletToBlock)
{

}

void UPalletPulldownBlockerComponent::Multicast_PalletPulldownBlockedHideCosmetic_Implementation(UObject* palletToUnblock)
{

}

void UPalletPulldownBlockerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UPalletPulldownBlockerComponent, _isPalletPulldownBlockedByEntity);
	DOREPLIFETIME(UPalletPulldownBlockerComponent, _palletToBlock);
}

UPalletPulldownBlockerComponent::UPalletPulldownBlockerComponent()
{
	this->_isPalletPulldownBlockedByEntity = false;
	this->_palletToBlock = NULL;
	this->_blockedDisappearFxTime = 2.000000;
}
