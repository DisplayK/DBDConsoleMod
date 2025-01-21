#pragma once

#include "CoreMinimal.h"
#include "SurvivorCosmeticHelperActor.h"
#include "EK28NightCycleState.h"
#include "K28SurvivorCosmeticHelperActor.generated.h"

class UStaticMeshComponent;

UCLASS()
class AK28SurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void OnLevelReadyToPlay();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	UStaticMeshComponent* GetDarknessPlaneMesh() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnNighttimeNearingActivation();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnNightCycleChanged(EK28NightCycleState nightCycleState);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnLocallyObservedChanged();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_DeactivateNightGlowVFX();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ActivateNightGlowVFX();

public:
	AK28SurvivorCosmeticHelperActor();
};

FORCEINLINE uint32 GetTypeHash(const AK28SurvivorCosmeticHelperActor) { return 0; }
