#pragma once

#include "CoreMinimal.h"
#include "GateBlockerEffect.h"
#include "SingleGateBlockerEffect.generated.h"

class AEscapeDoor;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API USingleGateBlockerEffect : public UGateBlockerEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _distanceThreshold;

	UPROPERTY(Transient)
	AEscapeDoor* _gate;

	UPROPERTY(Replicated, Transient)
	bool _isInRange;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USingleGateBlockerEffect();
};

FORCEINLINE uint32 GetTypeHash(const USingleGateBlockerEffect) { return 0; }
