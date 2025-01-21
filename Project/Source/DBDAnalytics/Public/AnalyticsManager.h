#pragma once

#include "CoreMinimal.h"
#include "AbstractAnalyticsManager.h"
#include "AnalyticsManager.generated.h"

UCLASS()
class UAnalyticsManager : public UAbstractAnalyticsManager
{
	GENERATED_BODY()

public:
	UAnalyticsManager();
};

FORCEINLINE uint32 GetTypeHash(const UAnalyticsManager) { return 0; }
