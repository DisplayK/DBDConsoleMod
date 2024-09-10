#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LocalEventManager.generated.h"

UCLASS()
class ULocalEventManager : public UObject
{
	GENERATED_BODY()

public:
	ULocalEventManager();
};

FORCEINLINE uint32 GetTypeHash(const ULocalEventManager) { return 0; }
