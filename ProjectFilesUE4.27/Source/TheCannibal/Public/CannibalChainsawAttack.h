#pragma once

#include "CoreMinimal.h"
#include "ButtonPromptSource.h"
#include "HillbillyChainsawAttack.h"
#include "TagStateBool.h"
#include "CannibalChainsawAttack.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THECANNIBAL_API UCannibalChainsawAttack : public UHillbillyChainsawAttack, public IButtonPromptSource
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	FTagStateBool _isInTantrum;

public:
	UCannibalChainsawAttack();
};

FORCEINLINE uint32 GetTypeHash(const UCannibalChainsawAttack) { return 0; }
