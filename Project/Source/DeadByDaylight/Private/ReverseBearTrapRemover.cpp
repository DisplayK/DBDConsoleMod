#include "ReverseBearTrapRemover.h"
#include "Net/UnrealNetwork.h"
#include "MapActorComponent.h"

class AReverseBearTrap;
class UPrimitiveComponent;
class AActor;

bool AReverseBearTrapRemover::HasSearchedForKey(int32 keyId) const
{
	return false;
}

bool AReverseBearTrapRemover::HasKey(int32 keyId) const
{
	return false;
}

UMapActorComponent* AReverseBearTrapRemover::GetMapActor() const
{
	return NULL;
}

UPrimitiveComponent* AReverseBearTrapRemover::GetInteractorPrimitiveComponent_Implementation() const
{
	return NULL;
}

AReverseBearTrap* AReverseBearTrapRemover::GetAttachedRBT(AActor* player) const
{
	return NULL;
}

void AReverseBearTrapRemover::AddSearchedKey(int32 keyId)
{

}

void AReverseBearTrapRemover::AddKey(int32 keyId)
{

}

void AReverseBearTrapRemover::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AReverseBearTrapRemover, _keys);
	DOREPLIFETIME(AReverseBearTrapRemover, _keysSearched);
}

AReverseBearTrapRemover::AReverseBearTrapRemover()
{
	this->_keys = TArray<int32>();
	this->_keysSearched = TArray<int32>();
	this->_mapActor = CreateDefaultSubobject<UMapActorComponent>(TEXT("Map Actor"));
}
