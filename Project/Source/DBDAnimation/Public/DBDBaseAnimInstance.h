#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Templates/SubclassOf.h"
#include "DBDBaseAnimInstance.generated.h"

class UAnimEffectHandler;
class UAnimEffectBlackBoard;

UCLASS(NonTransient)
class DBDANIMATION_API UDBDBaseAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient)
	UAnimEffectBlackBoard* _animEffectBlackBoard;

	UPROPERTY(Transient)
	UAnimEffectHandler* _animEffectHandlerForSFX;

	UPROPERTY(Transient)
	UAnimEffectHandler* _animEffectHandlerForVFX;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UAnimEffectHandler> _animEffectHandlerClassForSFX;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UAnimEffectHandler> _animEffectHandlerClassForVFX;

public:
	UFUNCTION(BlueprintPure)
	bool HasBeenNotified(const FName animNotify) const;

public:
	UDBDBaseAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UDBDBaseAnimInstance) { return 0; }
