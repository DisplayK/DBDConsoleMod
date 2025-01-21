#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "EAttackType.h"
#include "IsMissEventOfAttackTypeQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UIsMissEventOfAttackTypeQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TArray<EAttackType> _attackOfType;

public:
	UIsMissEventOfAttackTypeQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UIsMissEventOfAttackTypeQEEvaluator) { return 0; }
