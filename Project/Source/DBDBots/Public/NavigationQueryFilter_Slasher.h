#pragma once

#include "CoreMinimal.h"
#include "NavigationQueryFilter_Player.h"
#include "NavigationQueryFilter_Slasher.generated.h"

UCLASS()
class DBDBOTS_API UNavigationQueryFilter_Slasher : public UNavigationQueryFilter_Player
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TMap<FString, float> DefaultInteractionsTimeCost;

	UPROPERTY(EditDefaultsOnly)
	TMap<FString, float> FrenzyInteractionsTimeCost;

public:
	UNavigationQueryFilter_Slasher();
};

FORCEINLINE uint32 GetTypeHash(const UNavigationQueryFilter_Slasher) { return 0; }
