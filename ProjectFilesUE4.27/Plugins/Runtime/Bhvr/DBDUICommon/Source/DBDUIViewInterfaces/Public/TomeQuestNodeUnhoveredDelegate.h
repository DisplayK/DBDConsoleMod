#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "TomeQuestNodeUnhoveredDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTomeQuestNodeUnhoveredDelegate, EPlayerRole, role);
