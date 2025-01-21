#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "EMatchingStatusEffectType.h"
#include "HasAnyVisibleStatusEffectOfType.generated.h"

UCLASS()
class UHasAnyVisibleStatusEffectOfType : public UEvaluatorCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	EMatchingStatusEffectType _statusEffectOfType;

public:
	UHasAnyVisibleStatusEffectOfType();
};

FORCEINLINE uint32 GetTypeHash(const UHasAnyVisibleStatusEffectOfType) { return 0; }
