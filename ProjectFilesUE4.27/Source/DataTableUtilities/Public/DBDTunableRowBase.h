#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "DBDTunableRowBase.generated.h"

USTRUCT()
struct FDBDTunableRowBase: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	DATATABLEUTILITIES_API FDBDTunableRowBase();
};

FORCEINLINE uint32 GetTypeHash(const FDBDTunableRowBase) { return 0; }
