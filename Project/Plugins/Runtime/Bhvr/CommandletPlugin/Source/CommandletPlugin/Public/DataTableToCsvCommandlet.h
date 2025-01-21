#pragma once

#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "DataTableToCsvCommandlet.generated.h"

UCLASS(NonTransient)
class UDataTableToCsvCommandlet : public UCommandlet
{
	GENERATED_BODY()

public:
	UDataTableToCsvCommandlet();
};

FORCEINLINE uint32 GetTypeHash(const UDataTableToCsvCommandlet) { return 0; }
