#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "BlessedStatusEffect.generated.h"

class UBlessedVignetteController;
class ACamperPlayer;
class ATotem;

UCLASS(meta=(BlueprintSpawnableComponent))
class UBlessedStatusEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UBlessedVignetteController> _vignetteControllerBlueprint;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnExitBoonRange();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnEnterBoonRange();

public:
	UFUNCTION(BlueprintPure)
	ATotem* GetBoundTotem() const;

protected:
	UFUNCTION(BlueprintPure)
	float GetBoonTotemBlessingRange() const;

private:
	UFUNCTION()
	void Authority_OnSurvivorRemovedFromGame(ACamperPlayer* survivor);

public:
	UBlessedStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UBlessedStatusEffect) { return 0; }
