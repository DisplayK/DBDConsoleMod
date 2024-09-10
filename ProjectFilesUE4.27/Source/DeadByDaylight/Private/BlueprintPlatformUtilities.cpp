#include "BlueprintPlatformUtilities.h"
#include "DBDPerPlatformInt.h"
#include "DBDPerPlatformFloat.h"

class UObject;

int32 UBlueprintPlatformUtilities::ToInteger(const FDBDPerPlatformInt& perPlatformInt, const UObject* objectInWorld)
{
	return 0;
}

float UBlueprintPlatformUtilities::ToFloat(const FDBDPerPlatformFloat& perPlatformFloat, const UObject* objectInWorld)
{
	return 0.0f;
}

UBlueprintPlatformUtilities::UBlueprintPlatformUtilities()
{

}
