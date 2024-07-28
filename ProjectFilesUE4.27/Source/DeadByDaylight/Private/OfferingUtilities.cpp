#include "OfferingUtilities.h"
#include "EOfferingEffectType.h"

class UObject;
class ADBDPlayer;

bool UOfferingUtilities::IsPlayerEquippedWithOfferingWithTag(const ADBDPlayer* player, const FName offeringTag)
{
	return false;
}

bool UOfferingUtilities::HasOfferingOfType(const UObject* worldContextObject, EOfferingEffectType offeringEffectType, int32 playerId)
{
	return false;
}

bool UOfferingUtilities::HasItemLossProtection(const ADBDPlayer* player)
{
	return false;
}

UOfferingUtilities::UOfferingUtilities()
{

}
