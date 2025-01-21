#pragma once

#include "CoreMinimal.h"
#include "KillerProjectileLauncher.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "KnivesLauncher.generated.h"

class AThrowingKnives;

UCLASS(BlueprintType, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UKnivesLauncher : public UKillerProjectileLauncher
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _knifeSpawnOffset;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _knifeSpawnForwardOffset;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _launchSpeed;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _maxAmmoTunable;

	UPROPERTY(Replicated)
	bool _isInSuperModeThrow;

public:
	UFUNCTION(BlueprintPure)
	AThrowingKnives* GetPower() const;

	UFUNCTION(BlueprintPure)
	int32 GetLocallyPredictedAmmo() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UKnivesLauncher();
};

FORCEINLINE uint32 GetTypeHash(const UKnivesLauncher) { return 0; }
