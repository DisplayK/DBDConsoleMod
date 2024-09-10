#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "GameplayTagContainer.h"
#include "TagStateBool.h"
#include "CrownPlayerComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class ANNIVERSARY_API UCrownPlayerComponent : public USceneComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_hasInteractedWithCrownPillarThisGame, Transient)
	bool _hasInteractedWithCrownPillarThisGame;

	UPROPERTY(EditAnywhere)
	FGameplayTagContainer _crownVFXParticleDeactivateTags;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer _unhookGameEvents;

	UPROPERTY(Transient)
	FTagStateBool _isCrownEventActive;

private:
	UFUNCTION()
	void OnRep_hasInteractedWithCrownPillarThisGame();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void Cosmetic_SetVFXParticlesVisibility(bool isVisible);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCrownPlayerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCrownPlayerComponent) { return 0; }
