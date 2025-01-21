#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "LightingSpecifics.generated.h"

class ABaseSky;

USTRUCT()
struct FLightingSpecifics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TSoftClassPtr<ABaseSky> LightBlueprint;

public:
	DEADBYDAYLIGHT_API FLightingSpecifics();
};

FORCEINLINE uint32 GetTypeHash(const FLightingSpecifics) { return 0; }
