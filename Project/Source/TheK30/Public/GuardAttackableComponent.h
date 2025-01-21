#pragma once

#include "CoreMinimal.h"
#include "AttackableComponent.h"
#include "GuardAttackableComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK30_API UGuardAttackableComponent : public UAttackableComponent
{
	GENERATED_BODY()

public:
	UGuardAttackableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGuardAttackableComponent) { return 0; }
