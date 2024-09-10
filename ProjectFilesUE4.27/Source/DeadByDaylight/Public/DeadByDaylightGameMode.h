#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "DeadByDaylightGameMode.generated.h"

UCLASS(NonTransient)
class DEADBYDAYLIGHT_API ADeadByDaylightGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	ADeadByDaylightGameMode();
};

FORCEINLINE uint32 GetTypeHash(const ADeadByDaylightGameMode) { return 0; }
