#pragma once

#include "CoreMinimal.h"
#include "VignetteCinematicPlayed.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVignetteCinematicPlayed, const int32, cinematicId);
