#pragma once

#include "CoreMinimal.h"
#include "PlayerAnimInstance.h"
#include "GuardAnimInstance.generated.h"

class AKnightGuard;

UCLASS(NonTransient)
class UGuardAnimInstance : public UPlayerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	AKnightGuard* _owningGuard;

	UPROPERTY(BlueprintReadWrite, Transient)
	float _forwardVelocity;

	UPROPERTY(BlueprintReadWrite, Transient)
	float _lateralVelocity;

	UPROPERTY(BlueprintReadWrite, Transient)
	float _animSpeed;

	UPROPERTY(BlueprintReadWrite, Transient)
	float _animDirection;

	UPROPERTY(BlueprintReadWrite, Transient)
	bool _isActive;

	UPROPERTY(BlueprintReadWrite, Transient)
	bool _isPatrolling;

	UPROPERTY(BlueprintReadWrite, Transient)
	bool _isPatrollingForward;

	UPROPERTY(BlueprintReadWrite, Transient)
	bool _isHunting;

	UPROPERTY(BlueprintReadWrite, Transient)
	bool _isTeleporting;

public:
	UGuardAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UGuardAnimInstance) { return 0; }
