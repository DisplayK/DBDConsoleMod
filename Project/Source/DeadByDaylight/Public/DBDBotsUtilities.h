#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DBDBotsUtilities.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDBotsUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UDBDBotsUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UDBDBotsUtilities) { return 0; }
