#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ESnowmanDestructionType.h"
#include "SnowmanAnimInstance.generated.h"

class ADBDPlayer;
class ASnowman;

UCLASS(NonTransient)
class USnowmanAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isIdle;

	UPROPERTY(BlueprintReadOnly)
	bool _isBeingEntered;

	UPROPERTY(BlueprintReadOnly)
	bool _isControlled;

	UPROPERTY(BlueprintReadOnly)
	bool _isDestroyed;

	UPROPERTY(BlueprintReadOnly)
	bool _isBeingDestroyedDueToSurvivorRunExit;

	UPROPERTY(BlueprintReadOnly)
	bool _isBeingDestroyedDueToKillerAttackExit;

	UPROPERTY(BlueprintReadOnly)
	bool _isBeingDestroyedDueToKillerAttackWhileControlled;

	UPROPERTY(BlueprintReadOnly)
	bool _isBeingDestroyedDueToKillerAttackWhileEmpty;

	UPROPERTY(BlueprintReadOnly)
	bool _isSurvivorUsingSnowmanMoving;

private:
	UPROPERTY(Transient)
	TWeakObjectPtr<ASnowman> _snowman;

	UPROPERTY(Transient)
	TWeakObjectPtr<ADBDPlayer> _playerUsingSnowman;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowmanDestroyedEvent(ESnowmanDestructionType snowmanDestructionType);

public:
	USnowmanAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const USnowmanAnimInstance) { return 0; }
