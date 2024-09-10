#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RankManager.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API URankManager : public UObject
{
	GENERATED_BODY()

public:
	URankManager();
};

FORCEINLINE uint32 GetTypeHash(const URankManager) { return 0; }
