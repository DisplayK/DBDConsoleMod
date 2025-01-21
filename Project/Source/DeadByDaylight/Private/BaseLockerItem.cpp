#include "BaseLockerItem.h"
#include "Net/UnrealNetwork.h"

void ABaseLockerItem::OnRep_OwningLocker()
{

}

void ABaseLockerItem::AdjustPositionOnLocker()
{

}

void ABaseLockerItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABaseLockerItem, _owningLocker);
}

ABaseLockerItem::ABaseLockerItem()
{
	this->_owningLocker = NULL;
}
