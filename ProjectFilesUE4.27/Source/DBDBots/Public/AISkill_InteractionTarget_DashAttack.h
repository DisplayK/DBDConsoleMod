#pragma once

#include "CoreMinimal.h"
#include "EAttackType.h"
#include "AISkill_InteractionTarget_Dash.h"
#include "AISkill_InteractionTarget_DashAttack.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTarget_DashAttack : public UAISkill_InteractionTarget_Dash
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	float DashAttackUnderMaxRange;

	UPROPERTY(EditDefaultsOnly)
	float DashAttackUnderMaxHalfAngle;

	UPROPERTY(EditDefaultsOnly)
	EAttackType ExpectedAttackType;

public:
	UAISkill_InteractionTarget_DashAttack();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionTarget_DashAttack) { return 0; }
