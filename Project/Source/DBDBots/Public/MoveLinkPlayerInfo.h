#pragma once

#include "CoreMinimal.h"
#include "MoveLinkPlayerInfo.generated.h"

USTRUCT(BlueprintType)
struct FMoveLinkPlayerInfo
{
	GENERATED_BODY()

public:
	DBDBOTS_API FMoveLinkPlayerInfo();
};

FORCEINLINE uint32 GetTypeHash(const FMoveLinkPlayerInfo) { return 0; }
