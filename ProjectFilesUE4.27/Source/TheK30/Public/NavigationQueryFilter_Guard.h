#pragma once

#include "CoreMinimal.h"
#include "NavigationQueryFilter_Player.h"
#include "NavigationQueryFilter_Guard.generated.h"

UCLASS()
class UNavigationQueryFilter_Guard : public UNavigationQueryFilter_Player
{
	GENERATED_BODY()

public:
	UNavigationQueryFilter_Guard();
};

FORCEINLINE uint32 GetTypeHash(const UNavigationQueryFilter_Guard) { return 0; }
