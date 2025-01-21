#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BonusPointEventsManager.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UBonusPointEventsManager : public UObject
{
	GENERATED_BODY()

public:
	UBonusPointEventsManager();
};

FORCEINLINE uint32 GetTypeHash(const UBonusPointEventsManager) { return 0; }
