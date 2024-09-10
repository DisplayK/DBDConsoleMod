#pragma once

#include "CoreMinimal.h"
#include "GuardOrderBase.h"
#include "GuardDamageGenerator.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UGuardDamageGenerator : public UGuardOrderBase
{
	GENERATED_BODY()

public:
	UGuardDamageGenerator();
};

FORCEINLINE uint32 GetTypeHash(const UGuardDamageGenerator) { return 0; }
