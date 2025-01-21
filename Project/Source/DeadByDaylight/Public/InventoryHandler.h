#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InventoryHandler.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UInventoryHandler : public UObject
{
	GENERATED_BODY()

public:
	UInventoryHandler();
};

FORCEINLINE uint32 GetTypeHash(const UInventoryHandler) { return 0; }
