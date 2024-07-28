#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDPlayerLevelManager.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDPlayerLevelManager : public UObject
{
	GENERATED_BODY()

public:
	UDBDPlayerLevelManager();
};

FORCEINLINE uint32 GetTypeHash(const UDBDPlayerLevelManager) { return 0; }
