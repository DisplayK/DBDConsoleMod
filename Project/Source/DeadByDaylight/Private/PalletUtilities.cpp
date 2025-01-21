#include "PalletUtilities.h"
#include "UObject/SoftObjectPtr.h"

class APallet;
class APalletTracker;
class UStaticMesh;
class UObject;

TSoftClassPtr<APalletTracker> UPalletUtilities::GetPalletTrackerBP(const UObject* worldContextObject)
{
	return NULL;
}

TSoftObjectPtr<UStaticMesh> UPalletUtilities::GetIllusionaryPalletStaticMesh(const UObject* worldContextObjec)
{
	return NULL;
}

TSoftClassPtr<APallet> UPalletUtilities::GetDreamPalletBP(const UObject* worldContextObject)
{
	return NULL;
}

UPalletUtilities::UPalletUtilities()
{

}
