#pragma once

#include "CoreMinimal.h"
#include "NavigationQueryFilter_Player.h"
#include "NavigationQueryFilter_Slasher_Limited.generated.h"

UCLASS()
class DBDBOTS_API UNavigationQueryFilter_Slasher_Limited : public UNavigationQueryFilter_Player
{
	GENERATED_BODY()

public:
	UNavigationQueryFilter_Slasher_Limited();
};

FORCEINLINE uint32 GetTypeHash(const UNavigationQueryFilter_Slasher_Limited) { return 0; }
