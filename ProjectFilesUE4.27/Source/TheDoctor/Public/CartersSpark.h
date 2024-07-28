#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "DBDTunableRowHandle.h"
#include "Templates/SubclassOf.h"
#include "CartersSpark.generated.h"

class ACamperPlayer;
class ADBDPlayer;
class UStatusEffect;
class USurvivorCartersSparkComponent;
class UCartersSparkComponent;

UCLASS()
class ACartersSpark : public ACollectable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _shockAttackComboTimerDuration;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<USurvivorCartersSparkComponent> _survivorCartersSparkComponentClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _doctorBlockInterruptEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _madnessStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _illusionaryDoctorEffect;

	UPROPERTY(EditDefaultsOnly, Export)
	UCartersSparkComponent* _cartersSparkComponent;

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnShockTherapyZoneDetonated(ADBDPlayer* killer, const int32 survivorsHitCount);

	UFUNCTION(BlueprintCallable)
	void CancelSurvivorInteraction(ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable)
	void Authority_StartShockAttackComboTimer(ACamperPlayer* shockedSurvivor);

public:
	ACartersSpark();
};

FORCEINLINE uint32 GetTypeHash(const ACartersSpark) { return 0; }
