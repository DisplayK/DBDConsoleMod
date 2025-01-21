#pragma once

#include "CoreMinimal.h"
#include "KillerSoundCueTracker.generated.h"

USTRUCT()
struct FKillerSoundCueTracker
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FKillerSoundCueTracker();
};

FORCEINLINE uint32 GetTypeHash(const FKillerSoundCueTracker) { return 0; }
