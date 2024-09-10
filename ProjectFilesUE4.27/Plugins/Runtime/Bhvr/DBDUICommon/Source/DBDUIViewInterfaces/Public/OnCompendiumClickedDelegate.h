#pragma once

#include "CoreMinimal.h"
#include "OnCompendiumClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCompendiumClickedDelegate, const FString&, tomeId);
