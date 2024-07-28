#pragma once

#include "CoreMinimal.h"
#include "PlayerDataForQuestConditions.generated.h"

USTRUCT()
struct FPlayerDataForQuestConditions
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FPlayerDataForQuestConditions();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerDataForQuestConditions) { return 0; }
