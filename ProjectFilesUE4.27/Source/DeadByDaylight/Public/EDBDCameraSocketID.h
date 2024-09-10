#pragma once

#include "CoreMinimal.h"
#include "EDBDCameraSocketID.generated.h"

UENUM(BlueprintType)
enum class EDBDCameraSocketID : uint8
{
	VE_None,
	VE_Default,
	VE_Killcam,
	VE_Reaction,
	VE_Struggle,
	VE_Sacrifice,
};
