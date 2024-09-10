#pragma once

#include "CoreMinimal.h"
#include "VignetteVoiceOverPlayed.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVignetteVoiceOverPlayed, const int32, vignetteEntry);
