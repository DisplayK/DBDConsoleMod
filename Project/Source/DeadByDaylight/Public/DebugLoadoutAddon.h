#pragma once

#include "CoreMinimal.h"
#include "AddonDropdown.h"
#include "DebugLoadoutAddon.generated.h"

USTRUCT(BlueprintType)
struct FDebugLoadoutAddon
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FAddonDropdown AddonDropdown;

public:
	DEADBYDAYLIGHT_API FDebugLoadoutAddon();
};

FORCEINLINE uint32 GetTypeHash(const FDebugLoadoutAddon) { return 0; }
