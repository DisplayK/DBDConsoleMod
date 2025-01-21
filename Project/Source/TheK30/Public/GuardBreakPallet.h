#pragma once

#include "CoreMinimal.h"
#include "GuardOrderBase.h"
#include "GuardBreakPallet.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UGuardBreakPallet : public UGuardOrderBase
{
	GENERATED_BODY()

public:
	UGuardBreakPallet();
};

FORCEINLINE uint32 GetTypeHash(const UGuardBreakPallet) { return 0; }
