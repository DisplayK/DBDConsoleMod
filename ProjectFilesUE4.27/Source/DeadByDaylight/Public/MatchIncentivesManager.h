#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MatchIncentivesManager.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UMatchIncentivesManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UMatchIncentivesManager();
};

FORCEINLINE uint32 GetTypeHash(const UMatchIncentivesManager) { return 0; }
