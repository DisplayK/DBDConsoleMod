#pragma once

#include "CoreMinimal.h"
#include "EMobileLoginAuthContext.generated.h"

UENUM(BlueprintType)
enum class EMobileLoginAuthContext : uint8
{
	Splash,
	OverlayMenu,
	ResumeFromSuspend,
};
