#pragma once

#include "CoreMinimal.h"
#include "DBDInitPlayerQuery.h"
#include "DBDInitPlayerQueryYesNo.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDInitPlayerQueryYesNo : public UDBDInitPlayerQuery
{
	GENERATED_BODY()

public:
	UDBDInitPlayerQueryYesNo();
};

FORCEINLINE uint32 GetTypeHash(const UDBDInitPlayerQueryYesNo) { return 0; }
