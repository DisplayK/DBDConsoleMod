#include "TotemBoundPerk.h"
#include "Net/UnrealNetwork.h"

class AActor;
class ATotem;

void UTotemBoundPerk::OnRep_BoundTotems()
{

}

TArray<ATotem*> UTotemBoundPerk::GetTotems() const
{
	return TArray<ATotem*>();
}

float UTotemBoundPerk::GetSquaredDistanceToOwner(const AActor* survivor) const
{
	return 0.0f;
}

TArray<ATotem*> UTotemBoundPerk::GetBoundTotems() const
{
	return TArray<ATotem*>();
}

void UTotemBoundPerk::Authority_UnbindFromTotem(ATotem* aTotemActor)
{

}

bool UTotemBoundPerk::Authority_BindToDullTotems(bool allowAdditionalBoundTotems)
{
	return false;
}

void UTotemBoundPerk::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UTotemBoundPerk, _boundTotems);
}

UTotemBoundPerk::UTotemBoundPerk()
{
	this->TotemBoundState = ETotemState::Cleansed;
	this->_doNotBindToTotemOnInit = false;
	this->_boundTotems = TArray<ATotem*>();
	this->_local_boundTotems = TArray<ATotem*>();
	this->_authorityPrevTotemActors = TArray<ATotem*>();
	this->_numTotemsToBind = 1;
}
