#include "ItemAddon.h"
#include "Net/UnrealNetwork.h"

class ACollectable;
class ADBDPlayer;

void UItemAddon::OnRep_TokenCount(int32 oldCount)
{

}

void UItemAddon::OnRep_AddonInitializationData()
{

}

void UItemAddon::Multicast_SetBaseItem_Implementation(ACollectable* baseItem)
{

}

bool UItemAddon::Multicast_SetBaseItem_Validate(ACollectable* baseItem)
{
	return true;
}

void UItemAddon::Multicast_AddAddonToItem_Implementation(ACollectable* item)
{

}

bool UItemAddon::IsSecondaryAction() const
{
	return false;
}

bool UItemAddon::IsReadyForSetUp_Implementation() const
{
	return false;
}

int32 UItemAddon::GetTokenCount() const
{
	return 0;
}

int32 UItemAddon::GetMaxTokenCount() const
{
	return 0;
}

void UItemAddon::Authority_SetTokenCount(int32 value)
{

}

void UItemAddon::Authority_SetMaxTokenCount(int32 value)
{

}

void UItemAddon::Authority_OnCollectablePickedUp_Implementation(ADBDPlayer* player)
{

}

void UItemAddon::Authority_IncrementToken()
{

}

void UItemAddon::Authority_DecrementToken()
{

}

void UItemAddon::Authority_ApplyMetaModifiers()
{

}

void UItemAddon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UItemAddon, _tokenCount);
	DOREPLIFETIME(UItemAddon, _maxTokenCount);
	DOREPLIFETIME(UItemAddon, _addonInitializationData);
}

UItemAddon::UItemAddon()
{
	this->BaseItemType = NULL;
	this->_needsSetup = false;
	this->_tokenCount = 0;
	this->_maxTokenCount = 3;
}
