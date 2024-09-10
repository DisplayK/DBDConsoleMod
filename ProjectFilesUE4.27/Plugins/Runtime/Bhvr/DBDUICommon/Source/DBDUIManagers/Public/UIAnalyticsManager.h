#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UIAnalyticsManager.generated.h"

UCLASS()
class DBDUIMANAGERS_API UUIAnalyticsManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UUIAnalyticsManager();
};

FORCEINLINE uint32 GetTypeHash(const UUIAnalyticsManager) { return 0; }
