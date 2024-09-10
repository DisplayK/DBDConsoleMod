#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDTimeTravelManager.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDTimeTravelManager : public UObject
{
	GENERATED_BODY()

public:
	UDBDTimeTravelManager();
};

FORCEINLINE uint32 GetTypeHash(const UDBDTimeTravelManager) { return 0; }
