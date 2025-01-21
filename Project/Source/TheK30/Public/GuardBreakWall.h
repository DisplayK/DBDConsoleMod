#pragma once

#include "CoreMinimal.h"
#include "GuardOrderBase.h"
#include "GuardBreakWall.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UGuardBreakWall : public UGuardOrderBase
{
	GENERATED_BODY()

public:
	UGuardBreakWall();
};

FORCEINLINE uint32 GetTypeHash(const UGuardBreakWall) { return 0; }
