#pragma once

#include "CoreMinimal.h"
#include "KnownActorCallback.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FKnownActorCallback, AActor*, knownActor);
