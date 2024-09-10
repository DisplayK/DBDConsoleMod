#pragma once

#include "CoreMinimal.h"
#include "BaseKillerAttackSubAnimInstance.h"
#include "HillbillyChainsawSubAnimInstance.generated.h"

UCLASS(NonTransient)
class UHillbillyChainsawSubAnimInstance : public UBaseKillerAttackSubAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isRevvingChainsaw;

	UPROPERTY(BlueprintReadOnly)
	bool _isRevvingChainsawCancelled;

	UPROPERTY(BlueprintReadOnly)
	bool _isChainsawSprinting;

	UPROPERTY(BlueprintReadOnly)
	bool _isWaitingForChainsaw;

public:
	UHillbillyChainsawSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UHillbillyChainsawSubAnimInstance) { return 0; }
