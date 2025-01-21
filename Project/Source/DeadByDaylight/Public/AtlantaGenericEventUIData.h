#pragma once

#include "CoreMinimal.h"
#include "AtlantaBaseEventsUIData.h"
#include "AtlantaEventElementUIData.h"
#include "AtlantaGenericEventUIData.generated.h"

USTRUCT()
struct FAtlantaGenericEventUIData: public FAtlantaBaseEventsUIData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FAtlantaEventElementUIData> elementsUIData;

public:
	DEADBYDAYLIGHT_API FAtlantaGenericEventUIData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaGenericEventUIData) { return 0; }
