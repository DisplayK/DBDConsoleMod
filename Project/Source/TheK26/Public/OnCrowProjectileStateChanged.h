#pragma once

#include "CoreMinimal.h"
#include "OnCrowProjectileStateChanged.generated.h"

class AK26CrowProjectile;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCrowProjectileStateChanged, AK26CrowProjectile*, crowProjectile);
