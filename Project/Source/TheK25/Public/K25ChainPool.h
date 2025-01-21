#pragma once

#include "CoreMinimal.h"
#include "AuthoritativeActorPoolComponent.h"
#include "K25ChainPool.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK25ChainPool : public UAuthoritativeActorPoolComponent
{
	GENERATED_BODY()

public:
	UK25ChainPool();
};

FORCEINLINE uint32 GetTypeHash(const UK25ChainPool) { return 0; }
