#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ObjectPlacementUpdateStrategy.generated.h"

UCLASS(Abstract, EditInlineNew)
class UObjectPlacementUpdateStrategy : public UObject
{
	GENERATED_BODY()

public:
	UObjectPlacementUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UObjectPlacementUpdateStrategy) { return 0; }
