#pragma once

#include "CoreMinimal.h"
#include "FriendWidgetList.generated.h"

USTRUCT(BlueprintType)
struct FFriendWidgetList
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FFriendWidgetList();
};

FORCEINLINE uint32 GetTypeHash(const FFriendWidgetList) { return 0; }
