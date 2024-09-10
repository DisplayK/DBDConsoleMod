#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvQueryContext_CenterOfMap.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UEnvQueryContext_CenterOfMap : public UEnvQueryContext
{
	GENERATED_BODY()

public:
	UEnvQueryContext_CenterOfMap();
};

FORCEINLINE uint32 GetTypeHash(const UEnvQueryContext_CenterOfMap) { return 0; }
