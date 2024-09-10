#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RetentionRewardsSubsystem.generated.h"

UCLASS()
class RETENTIONREWARDSUTILITIES_API URetentionRewardsSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	URetentionRewardsSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const URetentionRewardsSubsystem) { return 0; }
