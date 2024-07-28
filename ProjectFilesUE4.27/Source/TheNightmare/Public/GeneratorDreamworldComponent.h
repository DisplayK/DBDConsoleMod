#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESkillCheckCustomType.h"
#include "GeneratorDreamworldComponent.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UGeneratorDreamworldComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TArray<FName> _beamSocketsForBloodEffect;

private:
	UFUNCTION()
	void OnRepairSkillCheckFailed(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, bool hadInput, ESkillCheckCustomType type, float chargeChange);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPlayerFailSkillCheck(ADBDPlayer* player);

public:
	UGeneratorDreamworldComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGeneratorDreamworldComponent) { return 0; }
