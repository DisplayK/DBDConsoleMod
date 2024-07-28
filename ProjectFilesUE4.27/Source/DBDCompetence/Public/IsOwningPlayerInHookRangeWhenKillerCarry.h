#pragma once

#include "CoreMinimal.h"
#include "IsOwningPlayerInRangeFromHook.h"
#include "IsOwningPlayerInHookRangeWhenKillerCarry.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsOwningPlayerInHookRangeWhenKillerCarry : public UIsOwningPlayerInRangeFromHook
{
	GENERATED_BODY()

public:
	UIsOwningPlayerInHookRangeWhenKillerCarry();
};

FORCEINLINE uint32 GetTypeHash(const UIsOwningPlayerInHookRangeWhenKillerCarry) { return 0; }
