#pragma once

#include "CoreMinimal.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "NavigationQueryFilter_EvadeLoop.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UNavigationQueryFilter_EvadeLoop : public UNavigationQueryFilter
{
	GENERATED_BODY()

public:
	UNavigationQueryFilter_EvadeLoop();
};

FORCEINLINE uint32 GetTypeHash(const UNavigationQueryFilter_EvadeLoop) { return 0; }
