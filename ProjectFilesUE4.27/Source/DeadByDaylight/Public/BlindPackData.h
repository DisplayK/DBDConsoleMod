#pragma once

#include "CoreMinimal.h"
#include "BaseItemData.h"
#include "BlindPackData.generated.h"

USTRUCT(BlueprintType)
struct FBlindPackData: public FBaseItemData
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FBlindPackData();
};

FORCEINLINE uint32 GetTypeHash(const FBlindPackData) { return 0; }
