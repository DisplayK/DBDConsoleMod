#pragma once

#include "CoreMinimal.h"
#include "SlasherVaultDefinition.h"
#include "DBDTunableRowHandle.h"
#include "FrenzySlasherVault.generated.h"

class UCurveFloat;
class ASlasherPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THELEGION_API UFrenzySlasherVault : public USlasherVaultDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _vaultFallSpeedCurve;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _frenzyWindowVaultDuration;

private:
	UFUNCTION()
	void OnSlasherSet(ASlasherPlayer* slasher);

public:
	UFrenzySlasherVault();
};

FORCEINLINE uint32 GetTypeHash(const UFrenzySlasherVault) { return 0; }
