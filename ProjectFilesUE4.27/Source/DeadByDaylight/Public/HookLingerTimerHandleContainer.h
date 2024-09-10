#pragma once

#include "CoreMinimal.h"
#include "HookLingerTimerHandleContainer.generated.h"

class AMeatHook;

USTRUCT()
struct FHookLingerTimerHandleContainer
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	AMeatHook* Hook;

public:
	DEADBYDAYLIGHT_API FHookLingerTimerHandleContainer();
};

FORCEINLINE uint32 GetTypeHash(const FHookLingerTimerHandleContainer) { return 0; }
