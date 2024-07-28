#pragma once

#include "CoreMinimal.h"
#include "KillerAttackSubAnimInstance.h"
#include "EAttackType.h"
#include "K25AttackSubAnimInstance.generated.h"

UCLASS(NonTransient)
class THEK25_API UK25AttackSubAnimInstance : public UKillerAttackSubAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _hasDownedTargetHoldingLamentConfiguration;

protected:
	UFUNCTION()
	void OnAttackStart(const EAttackType attackType);

public:
	UK25AttackSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK25AttackSubAnimInstance) { return 0; }
