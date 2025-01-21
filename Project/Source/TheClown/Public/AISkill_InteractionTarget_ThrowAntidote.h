#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionTarget_Throw.h"
#include "AISkill_InteractionTarget_ThrowAntidote.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class UAISkill_InteractionTarget_ThrowAntidote : public UAISkill_InteractionTarget_Throw
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float _minPathLengthForThrow;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float _minThrowDistance;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float _cooldownTime;

protected:
	UFUNCTION()
	void OnPathUpdated();

public:
	UAISkill_InteractionTarget_ThrowAntidote();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionTarget_ThrowAntidote) { return 0; }
