#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvQueryContext_TerrorRadius.generated.h"

UCLASS(MinimalAPI, EditInlineNew)
class UEnvQueryContext_TerrorRadius : public UEnvQueryContext
{
	GENERATED_BODY()

public:
	UEnvQueryContext_TerrorRadius();
};

FORCEINLINE uint32 GetTypeHash(const UEnvQueryContext_TerrorRadius) { return 0; }
