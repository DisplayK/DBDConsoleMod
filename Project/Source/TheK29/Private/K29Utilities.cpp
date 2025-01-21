#include "K29Utilities.h"

class AK29Power;
class AActor;
class UObject;
class ASlasherPlayer;

bool UK29Utilities::IsSurvivorAbleToBeAffectedByPower(const AActor* survivorAsActor, const ASlasherPlayer* killer)
{
	return false;
}

AK29Power* UK29Utilities::GetK29Power(const UObject* worldContextObject)
{
	return NULL;
}

UK29Utilities::UK29Utilities()
{

}
