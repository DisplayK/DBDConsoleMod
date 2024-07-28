#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SignificanceStrategy.generated.h"

UCLASS(Abstract, EditInlineNew)
class SIGNIFICANCEUTILITIES_API USignificanceStrategy : public UObject
{
	GENERATED_BODY()

public:
	USignificanceStrategy();
};

FORCEINLINE uint32 GetTypeHash(const USignificanceStrategy) { return 0; }
