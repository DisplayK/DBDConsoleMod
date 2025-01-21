#pragma once

#include "CoreMinimal.h"
#include "PalletPulldownBlockable.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "IllusionaryPalletComponent.generated.h"

class ADBDPlayer;
class UBoxComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UIllusionaryPalletComponent : public UActorComponent, public IPalletPulldownBlockable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FTransform _illusionaryPalletDownTransform;

	UPROPERTY(Transient, Export)
	UBoxComponent* _illusionaryPalletTriggerZone;

	UPROPERTY(EditDefaultsOnly)
	FVector _illusionaryPalletTriggerZoneBoxExtent;

	UPROPERTY(EditDefaultsOnly)
	FVector _illusionaryPalletTriggerZoneLocation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float _glitchEffectRange;

	UPROPERTY(Transient, Export)
	UStaticMeshComponent* _illusionaryPalletStaticMeshComponent;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnStartIllusionaryPalletDeactivation(ADBDPlayer* triggeringPlayer);

	UFUNCTION(BlueprintImplementableEvent)
	void OnStartIllusionaryPalletActivation(const bool isPalletDown);

public:
	UFUNCTION(BlueprintPure)
	float GetGlitchEffectRange() const;

protected:
	UFUNCTION(BlueprintCallable)
	void DeactivateIllusionaryPallet();

public:
	UFUNCTION(BlueprintPure)
	bool CanLocallyObservedPlayerSeeIllusionaryPallet() const;

protected:
	UFUNCTION(BlueprintCallable)
	void ActivateIllusionaryPallet(const bool isPalletDown);

public:
	UIllusionaryPalletComponent();
};

FORCEINLINE uint32 GetTypeHash(const UIllusionaryPalletComponent) { return 0; }
