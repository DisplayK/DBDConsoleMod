#pragma once

#include "CoreMinimal.h"
#include "PlayerAnimInstance.h"
#include "EInteractionAnimation.h"
#include "EAttackSubstate.h"
#include "ConjoinedTwinAnimInstance.generated.h"

class AConjoinedTwin;
class UTwinLockerBlockerComponent;
class UDBDAttackerComponent;
class UTwinAttachmentComponent;

UCLASS(NonTransient)
class UConjoinedTwinAnimInstance : public UPlayerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	AConjoinedTwin* _owningConjoinedTwin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _firstPersonView;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _forwardVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _lateralVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInteractionAnimation _interactionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInAir;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _idleTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAttacking;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UDBDAttackerComponent* _attackerComponent;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UTwinAttachmentComponent* _twinAttachmentComponent;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UTwinLockerBlockerComponent* _twinLockerBlockerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _animYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _animPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isSpectator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _animDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _animSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAttachedToSister;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAttachedToSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAttachedToFemaleSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isChargingTwinJump;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isPossessing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isWakingUpFromPossess;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isDormant;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBeingAutoPossessedAfterRelease;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAttachedToLocker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttackSubstate _attackState;

protected:
	UFUNCTION(BlueprintPure)
	AConjoinedTwin* GetOwningConjoinedTwin() const;

public:
	UConjoinedTwinAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UConjoinedTwinAnimInstance) { return 0; }
