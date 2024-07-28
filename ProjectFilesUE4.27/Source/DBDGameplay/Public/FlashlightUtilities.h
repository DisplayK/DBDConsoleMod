#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FlashlightUtilities.generated.h"

UCLASS()
class DBDGAMEPLAY_API UFlashlightUtilities : public UObject
{
	GENERATED_BODY()

public:
	UFlashlightUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UFlashlightUtilities) { return 0; }
