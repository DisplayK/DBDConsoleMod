#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvQueryContext_Lockers.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UEnvQueryContext_Lockers : public UEnvQueryContext
{
	GENERATED_BODY()

public:
	UEnvQueryContext_Lockers();
};

FORCEINLINE uint32 GetTypeHash(const UEnvQueryContext_Lockers) { return 0; }
