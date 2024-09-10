#pragma once

#include "CoreMinimal.h"
#include "AtlantaFriendUIData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaFriendUIData
{
	GENERATED_BODY()

public:
	DBDUIVIEWSMOBILE_API FAtlantaFriendUIData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaFriendUIData) { return 0; }
