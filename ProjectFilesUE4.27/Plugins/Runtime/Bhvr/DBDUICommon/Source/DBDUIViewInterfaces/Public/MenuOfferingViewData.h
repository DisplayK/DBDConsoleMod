#pragma once

#include "CoreMinimal.h"
#include "MenuLoadoutPartViewData.h"
#include "MenuOfferingViewData.generated.h"

UCLASS()
class UMenuOfferingViewData : public UMenuLoadoutPartViewData
{
	GENERATED_BODY()

public:
	UMenuOfferingViewData();
};

FORCEINLINE uint32 GetTypeHash(const UMenuOfferingViewData) { return 0; }
