#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "UObject/NoExportTypes.h"
#include "FastTimer.h"
#include "K27P03.generated.h"

class AGenerator;
class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK27P03 : public UPerk
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FLinearColor _generatorBlockedAuraColorForKiller;

private:
	UPROPERTY(EditDefaultsOnly)
	float _generatorProgressionActivation;

	UPROPERTY(EditDefaultsOnly)
	float _generatorBlockedDuration;

	UPROPERTY(Transient)
	TMap<TWeakObjectPtr<AGenerator>, FFastTimer> _authority_blockedGeneratorsAndTimeToUnblock;

	UPROPERTY(Transient)
	TMap<TWeakObjectPtr<ACamperPlayer>, TWeakObjectPtr<AGenerator>> _authority_affectedRepairersAndTheirGenerators;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_HighlightBlockedGeneratorForKiller(AGenerator* generator);

public:
	UK27P03();
};

FORCEINLINE uint32 GetTypeHash(const UK27P03) { return 0; }
