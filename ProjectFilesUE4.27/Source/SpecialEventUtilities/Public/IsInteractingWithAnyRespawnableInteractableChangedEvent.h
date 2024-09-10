#pragma once

#include "CoreMinimal.h"
#include "IsInteractingWithAnyRespawnableInteractableChangedEvent.generated.h"

class ARespawnableInteractable;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIsInteractingWithAnyRespawnableInteractableChangedEvent, ARespawnableInteractable*, respawnableInteractable, bool, isInteracting);
