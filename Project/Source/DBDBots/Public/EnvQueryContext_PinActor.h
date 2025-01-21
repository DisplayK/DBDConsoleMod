#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvQueryContext_PinActor.generated.h"

UCLASS(MinimalAPI, EditInlineNew)
class UEnvQueryContext_PinActor : public UEnvQueryContext
{
	GENERATED_BODY()

public:
	UEnvQueryContext_PinActor();
};

FORCEINLINE uint32 GetTypeHash(const UEnvQueryContext_PinActor) { return 0; }
