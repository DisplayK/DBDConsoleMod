#include "DetectionZoneUtilities.h"
#include "UObject/NoExportTypes.h"
#include "EDetectionZone.h"

class ADBDPlayer;
class UPhysicalMaterial;

bool UDetectionZoneUtilities::DetectObstruction(const ADBDPlayer* player, EDetectionZone detectionZoneID, UPhysicalMaterial*& physicalMaterialOut, FVector& positionOut, FVector& normalOut)
{
	return false;
}

UDetectionZoneUtilities::UDetectionZoneUtilities()
{

}
