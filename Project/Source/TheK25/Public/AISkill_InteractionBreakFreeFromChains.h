#pragma once

#include "CoreMinimal.h"
#include "AISkill_Interaction.h"
#include "DBDTunableRowHandle.h"
#include "AISkill_InteractionBreakFreeFromChains.generated.h"

UCLASS(EditInlineNew)
class UAISkill_InteractionBreakFreeFromChains : public UAISkill_Interaction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _breakFreeFromChainsMaxCharge;

public:
	UAISkill_InteractionBreakFreeFromChains();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionBreakFreeFromChains) { return 0; }
