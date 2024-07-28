#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDEngineUtils.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDEngineUtils : public UObject
{
	GENERATED_BODY()

public:
	UDBDEngineUtils();
};

FORCEINLINE uint32 GetTypeHash(const UDBDEngineUtils) { return 0; }
