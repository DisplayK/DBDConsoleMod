#pragma once

#include "CoreMinimal.h"
#include "MaxEventCountQEEvaluator.h"
#include "HitDifferentInFrenzyMaxCountQEEvaluator.generated.h"

class AActor;

UCLASS()
class ARCHIVES_API UHitDifferentInFrenzyMaxCountQEEvaluator : public UMaxEventCountQEEvaluator
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TSet<TWeakObjectPtr<AActor>> _targetList;

public:
	UHitDifferentInFrenzyMaxCountQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UHitDifferentInFrenzyMaxCountQEEvaluator) { return 0; }
