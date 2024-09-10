#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "TargetNearPalletVaultWallQEEvaluator.generated.h"

UCLASS()
class UTargetNearPalletVaultWallQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UTargetNearPalletVaultWallQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UTargetNearPalletVaultWallQEEvaluator) { return 0; }
