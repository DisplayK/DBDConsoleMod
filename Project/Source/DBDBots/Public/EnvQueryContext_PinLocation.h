#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvQueryContext_PinLocation.generated.h"

UCLASS(MinimalAPI, EditInlineNew)
class UEnvQueryContext_PinLocation : public UEnvQueryContext
{
	GENERATED_BODY()

public:
	UEnvQueryContext_PinLocation();
};

FORCEINLINE uint32 GetTypeHash(const UEnvQueryContext_PinLocation) { return 0; }
