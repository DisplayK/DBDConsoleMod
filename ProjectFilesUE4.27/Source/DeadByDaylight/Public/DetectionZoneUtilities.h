#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "EDetectionZone.h"
#include "DetectionZoneUtilities.generated.h"

class UPhysicalMaterial;
class ADBDPlayer;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDetectionZoneUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static bool DetectObstruction(const ADBDPlayer* player, EDetectionZone detectionZoneID, UPhysicalMaterial*& physicalMaterialOut, FVector& positionOut, FVector& normalOut);

public:
	UDetectionZoneUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UDetectionZoneUtilities) { return 0; }
