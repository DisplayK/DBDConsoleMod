#pragma once

#include "CoreMinimal.h"
#include "MenuLoadoutPartViewData.h"
#include "MenuPowerViewData.generated.h"

UCLASS()
class UMenuPowerViewData : public UMenuLoadoutPartViewData
{
	GENERATED_BODY()

public:
	UMenuPowerViewData();
};

FORCEINLINE uint32 GetTypeHash(const UMenuPowerViewData) { return 0; }
