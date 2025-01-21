#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "DBDTableRowBaseWithId.generated.h"

USTRUCT()
struct FDBDTableRowBaseWithId: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FName Id;

public:
	DATATABLEUTILITIES_API FDBDTableRowBaseWithId();
};

FORCEINLINE uint32 GetTypeHash(const FDBDTableRowBaseWithId) { return 0; }
