#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpecialEventsContainer.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API USpecialEventsContainer : public UObject
{
	GENERATED_BODY()

public:
	USpecialEventsContainer();
};

FORCEINLINE uint32 GetTypeHash(const USpecialEventsContainer) { return 0; }
