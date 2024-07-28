#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "WithPulledUpPalletQEEvaluator.generated.h"

class APallet;

UCLASS()
class UWithPulledUpPalletQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TArray<APallet*> _resetPallets;

public:
	UWithPulledUpPalletQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UWithPulledUpPalletQEEvaluator) { return 0; }
