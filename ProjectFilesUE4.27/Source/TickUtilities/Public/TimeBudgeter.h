#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "TimeBudgeter.generated.h"

UCLASS()
class TICKUTILITIES_API UTimeBudgeter : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	UTimeBudgeter();
};

FORCEINLINE uint32 GetTypeHash(const UTimeBudgeter) { return 0; }
