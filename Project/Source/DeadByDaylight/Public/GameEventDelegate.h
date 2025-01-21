#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "GameEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGameEventDelegate, const FGameplayTag, gameEventType, const FGameEventData&, gameEventData);
