#pragma once

#include "CoreMinimal.h"
#include "SurvivorCosmeticHelperActor.h"
#include "ECamperDamageState.h"
#include "OnryoSurvivorCosmeticHelperActor.generated.h"

class UCondemnedComponent;
class UGameplayTagContainerComponent;
class ACamperPlayer;
class ABaseSky;

UCLASS()
class THEONRYO_API AOnryoSurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UCondemnedComponent* _condemnedComponent;

protected:
	UFUNCTION(BlueprintPure)
	UGameplayTagContainerComponent* GetObjectState() const;

	UFUNCTION(BlueprintPure)
	UCondemnedComponent* GetCondemnedComponent() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnReceiveTape(ACamperPlayer* camper);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnLoseTape(ACamperPlayer* camper);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnLoseCondemnStack(ACamperPlayer* camper, float currentStacks);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnLightingSet(ABaseSky* lighting);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnHookedChanged();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnGainCondemnStack(ACamperPlayer* camper, float currentStacks);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnCarryStart(ACamperPlayer* camper);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnCarryEnd(ACamperPlayer* camper);

public:
	AOnryoSurvivorCosmeticHelperActor();
};

FORCEINLINE uint32 GetTypeHash(const AOnryoSurvivorCosmeticHelperActor) { return 0; }
