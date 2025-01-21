#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDInitPlayerQuery.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDInitPlayerQuery : public UObject
{
	GENERATED_BODY()

public:
	UDBDInitPlayerQuery();
};

FORCEINLINE uint32 GetTypeHash(const UDBDInitPlayerQuery) { return 0; }
