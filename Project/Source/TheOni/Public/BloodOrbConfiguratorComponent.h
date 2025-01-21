#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "GameEventBloodOrbDropParams.h"
#include "BloodOrbConfiguratorComponent.generated.h"

class ADBDPlayer;
class ABloodOrb;
class AMobileBloodOrbRenderer;
class UBloodOrbVisibilityComponent;
class UBloodOrbAbsorberComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UBloodOrbConfiguratorComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ABloodOrb> _bloodOrbClass;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameEventBloodOrbDropParams> _bloodOrbDropGameEvents;

	UPROPERTY(EditDefaultsOnly)
	float _fadeDuration;

	UPROPERTY(EditDefaultsOnly)
	float _initialFadeOutDelay;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _bloodOrbAuraColor;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _bloodOrbAttractedAuraColor;

	UPROPERTY(EditDefaultsOnly)
	float _bloodOrbVisibilityRangeInterpolationSpeed;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AMobileBloodOrbRenderer> _mobileBloodOrbRendererClass;

private:
	UFUNCTION()
	void UpdateSurvivorBloodOrbVisibilityRange(UBloodOrbVisibilityComponent* bloodOrbVisibilityComponent, const ADBDPlayer* killer) const;

	UFUNCTION()
	void UpdateKillerBloodOrbVisiblityRanges(UBloodOrbVisibilityComponent* bloodOrbVisibilityComponent, ADBDPlayer* killer) const;

	UFUNCTION()
	void UpdateBloodOrbAttractSpeed(UBloodOrbAbsorberComponent* bloodOrbAbsorberComponent, ADBDPlayer* killer) const;

	UFUNCTION()
	void OnLevelReadyToPlay();

	UFUNCTION()
	void Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier(const ADBDPlayer* killer) const;

public:
	UBloodOrbConfiguratorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBloodOrbConfiguratorComponent) { return 0; }
