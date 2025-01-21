#pragma once

#include "CoreMinimal.h"
#include "VignetteSelected.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVignetteSelected, const FString&, vignetteId);
