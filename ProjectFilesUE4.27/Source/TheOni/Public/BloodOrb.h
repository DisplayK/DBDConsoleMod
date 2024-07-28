#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "EBloodOrbState.h"
#include "BloodOrb.generated.h"

class ADBDPlayer;
class USceneComponent;
class UDBDOutlineComponent;
class UBloodOrbFadeComponent;

UCLASS()
class THEONI_API ABloodOrb : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FFloatInterval _randomMoveDelayInterval;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	USceneComponent* _absorbReference;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(EditDefaultsOnly)
	float _despawnDelay;

private:
	UPROPERTY(Replicated, Transient)
	TWeakObjectPtr<ADBDPlayer> _droppingPlayer;

	UPROPERTY(ReplicatedUsing=OnRep_State)
	EBloodOrbState _state;

	UPROPERTY(VisibleDefaultsOnly, Export)
	UBloodOrbFadeComponent* _fadeComponent;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void UpdateAttracted_Cosmetic(const FVector destination, ADBDPlayer* absorber, const float deltaTime);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void UpdateAbsorbed_Cosmetic(const FVector destination, ADBDPlayer* absorber, const float deltaTime);

private:
	UFUNCTION()
	void OnRep_State(const EBloodOrbState oldState);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnIsAttractedChangedCosmetic(const bool isAttracted);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnDestroyedCosmetic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnAbsorbedCosmetic();

public:
	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetDroppingPlayer() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintAuthorityOnly)
	void Authority_OnDropped(const ADBDPlayer* droppedBy, const float impulseFactor);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_OnDropFinished();

private:
	UFUNCTION()
	void Authority_DestroyBloodOrb();

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_Despawn();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ABloodOrb();
};

FORCEINLINE uint32 GetTypeHash(const ABloodOrb) { return 0; }
