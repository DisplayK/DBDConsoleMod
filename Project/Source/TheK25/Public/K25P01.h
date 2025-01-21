#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "UObject/NoExportTypes.h"
#include "FastTimer.h"
#include "K25P01.generated.h"

class AGenerator;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK25P01 : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _generatorBlockDuration;

	UPROPERTY(EditDefaultsOnly)
	float _auraRevealDuration;

	UPROPERTY(EditDefaultsOnly)
	bool _allowPerkToBlockZeroProgressionGenerators;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _generatorAuraColorForKiller;

private:
	UPROPERTY(Transient)
	TArray<FFastTimer> _generatorBlockingTimers;

	UPROPERTY(ReplicatedUsing=OnRep_GeneratorsBlocked, Transient)
	TArray<AGenerator*> _generatorsBlocked;

	UPROPERTY(Transient)
	TArray<AGenerator*> _local_generatorsBlocked;

private:
	UFUNCTION()
	void OnRep_GeneratorsBlocked();

	UFUNCTION()
	void Authority_OnBlockTimerDone(AGenerator* generator);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK25P01();
};

FORCEINLINE uint32 GetTypeHash(const UK25P01) { return 0; }
