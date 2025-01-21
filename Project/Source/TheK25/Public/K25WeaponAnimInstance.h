#pragma once

#include "CoreMinimal.h"
#include "BaseKillerWeaponAnimInstance.h"
#include "EAttackType.h"
#include "K25WeaponAnimInstance.generated.h"

UCLASS(NonTransient)
class THEK25_API UK25WeaponAnimInstance : public UBaseKillerWeaponAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _hasDownedTargetHoldingLamentConfiguration;

protected:
	UFUNCTION()
	void OnAttackStart(const EAttackType attackType);

public:
	UK25WeaponAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK25WeaponAnimInstance) { return 0; }
