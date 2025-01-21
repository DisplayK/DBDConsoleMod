#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvQueryContext_ZombiePatrolAreaPoint.generated.h"

UCLASS(EditInlineNew)
class UEnvQueryContext_ZombiePatrolAreaPoint : public UEnvQueryContext
{
	GENERATED_BODY()

public:
	UEnvQueryContext_ZombiePatrolAreaPoint();
};

FORCEINLINE uint32 GetTypeHash(const UEnvQueryContext_ZombiePatrolAreaPoint) { return 0; }
