#pragma once

#include "CoreMinimal.h"
#include "NavigationQueryFilter_Camper.h"
#include "NavigationQueryFilter_CamperStealth.generated.h"

UCLASS()
class DBDBOTS_API UNavigationQueryFilter_CamperStealth : public UNavigationQueryFilter_Camper
{
	GENERATED_BODY()

public:
	UNavigationQueryFilter_CamperStealth();
};

FORCEINLINE uint32 GetTypeHash(const UNavigationQueryFilter_CamperStealth) { return 0; }
