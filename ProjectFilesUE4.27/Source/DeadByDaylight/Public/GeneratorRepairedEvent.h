#pragma once

#include "CoreMinimal.h"
#include "GeneratorRepairedEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGeneratorRepairedEvent, bool, isAutoCompleted);
