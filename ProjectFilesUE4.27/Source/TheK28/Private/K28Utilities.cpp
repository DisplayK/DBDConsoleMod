#include "K28Utilities.h"

class UK28TeleportationStrategyComponent;
class UObject;
class AK28SecondaryCamera;
class UK28DayNightComponent;
class AK28Remnant;
class AK28Power;

bool UK28Utilities::IsLockerUsedByKillerLocked(const UObject* worldContextObject)
{
	return false;
}

UK28TeleportationStrategyComponent* UK28Utilities::GetTeleportationStrategyComponent(const UObject* worldContextObject)
{
	return NULL;
}

AK28SecondaryCamera* UK28Utilities::GetSecondaryCamera(const UObject* worldContextObject)
{
	return NULL;
}

AK28Remnant* UK28Utilities::GetRemnant(const UObject* worldContextObject)
{
	return NULL;
}

AK28Power* UK28Utilities::GetK28Power(const UObject* worldContextObject)
{
	return NULL;
}

UK28DayNightComponent* UK28Utilities::GetDayNightComponent(const UObject* worldContextObject)
{
	return NULL;
}

UK28Utilities::UK28Utilities()
{

}
