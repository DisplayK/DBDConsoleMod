#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MatchmakingFlowSubsystem.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UMatchmakingFlowSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UMatchmakingFlowSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UMatchmakingFlowSubsystem) { return 0; }
