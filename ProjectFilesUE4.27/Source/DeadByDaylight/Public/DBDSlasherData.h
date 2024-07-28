#pragma once

#include "CoreMinimal.h"
#include "DBDPlayerData.h"
#include "DBDSlasherData.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDSlasherData : public UDBDPlayerData
{
	GENERATED_BODY()

public:
	UDBDSlasherData();
};

FORCEINLINE uint32 GetTypeHash(const UDBDSlasherData) { return 0; }
