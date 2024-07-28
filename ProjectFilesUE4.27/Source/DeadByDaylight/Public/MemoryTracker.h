#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MemoryTracker.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API AMemoryTracker : public AActor
{
	GENERATED_BODY()

public:
	AMemoryTracker();
};

FORCEINLINE uint32 GetTypeHash(const AMemoryTracker) { return 0; }
