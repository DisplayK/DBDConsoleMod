#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "BloodwebNodeGate.generated.h"

USTRUCT()
struct FBloodwebNodeGate: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FBloodwebNodeGate();
};

FORCEINLINE uint32 GetTypeHash(const FBloodwebNodeGate) { return 0; }
