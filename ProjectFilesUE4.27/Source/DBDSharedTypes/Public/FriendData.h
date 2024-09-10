#pragma once

#include "CoreMinimal.h"
#include "FriendData.generated.h"

USTRUCT()
struct FFriendData
{
	GENERATED_BODY()

public:
	DBDSHAREDTYPES_API FFriendData();
};

FORCEINLINE uint32 GetTypeHash(const FFriendData) { return 0; }
