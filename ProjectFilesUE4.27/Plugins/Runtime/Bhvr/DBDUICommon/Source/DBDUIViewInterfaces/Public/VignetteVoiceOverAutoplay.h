#pragma once

#include "CoreMinimal.h"
#include "VignetteVoiceOverAutoplay.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVignetteVoiceOverAutoplay, const bool, autoplayVoiceOver, const int32, vignetteEntry);
