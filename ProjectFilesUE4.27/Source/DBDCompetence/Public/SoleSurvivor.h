#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "SoleSurvivor.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class USoleSurvivor : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _modifyActionSpeedWhenRepairingEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _modifyActionSpeedWhenOpeningGateOrHatchEffect;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _actionSpeedsRepairing;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _actionSpeedsOpeningGateOrHatch;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _auraHideDistancePerDeadOrDisconnectedSurvivor;

	UPROPERTY(Transient)
	TArray<ACamperPlayer*> _otherSurvivors;

private:
	UFUNCTION()
	void Authority_OnSurvivorAdded(const ACamperPlayer* survivor);

public:
	USoleSurvivor();
};

FORCEINLINE uint32 GetTypeHash(const USoleSurvivor) { return 0; }
