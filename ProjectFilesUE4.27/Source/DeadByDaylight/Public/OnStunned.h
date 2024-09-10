#pragma once

#include "CoreMinimal.h"
#include "OnStunned.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStunned, AActor*, instigator);
