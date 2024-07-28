#pragma once

#include "CoreMinimal.h"
#include "AuthoritativeActorPoolComponent.h"
#include "K25ProjectilePool.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK25ProjectilePool : public UAuthoritativeActorPoolComponent
{
	GENERATED_BODY()

public:
	UK25ProjectilePool();
};

FORCEINLINE uint32 GetTypeHash(const UK25ProjectilePool) { return 0; }
