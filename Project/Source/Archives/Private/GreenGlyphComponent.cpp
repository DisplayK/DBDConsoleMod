#include "GreenGlyphComponent.h"
#include "Net/UnrealNetwork.h"

void UGreenGlyphComponent::OnRep_SetShouldOutlineBeActive()
{

}

void UGreenGlyphComponent::Multicast_Cheat_ShowAuraGreenGlyphActive_Implementation(bool enabled, bool bForceShowAura)
{

}

void UGreenGlyphComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UGreenGlyphComponent, _shouldOutlineBeActive);
}

UGreenGlyphComponent::UGreenGlyphComponent()
{
	this->_revealAuraGlyphDuration = 5.000000;
	this->_shouldOutlineBeActive = false;
}
