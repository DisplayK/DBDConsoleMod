#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "GateBlockerEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UGateBlockerEffect : public UStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float _blockGateLingeringTime;

protected:
	UFUNCTION()
	void RemoveCantEscapeFlag();

public:
	UGateBlockerEffect();
};

FORCEINLINE uint32 GetTypeHash(const UGateBlockerEffect) { return 0; }
