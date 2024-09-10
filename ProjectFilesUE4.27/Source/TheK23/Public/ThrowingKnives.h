#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "Templates/SubclassOf.h"
#include "ThrowingKnives.generated.h"

class ASlasherPlayer;
class UK23PowerProgressPresentationComponent;
class ULacerationComponent;
class UFlurryComboScoreComponent;
class UKnivesLauncher;
class UTricksterSuperModeComponent;
class UReloadKnives;
class UKnivesProvider;
class UPowerChargeComponent;

UCLASS()
class AThrowingKnives : public ACollectable
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleDefaultsOnly, Replicated, Export)
	UFlurryComboScoreComponent* _flurryScoreComponent;

	UPROPERTY(VisibleDefaultsOnly, Replicated, Export)
	UTricksterSuperModeComponent* _superModeComponent;

	UPROPERTY(Export)
	UK23PowerProgressPresentationComponent* _superModeChargePresentationComponent;

	UPROPERTY(Export)
	UPowerChargeComponent* _superModeChargeComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UKnivesProvider* _knivesProvider;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UKnivesLauncher* _knivesLauncher;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ULacerationComponent> _lacerationComponentClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UReloadKnives> _reloadInteractionClass;

	UPROPERTY(EditDefaultsOnly)
	float _minimumTimeBetweenBroadcast;

private:
	UFUNCTION()
	void OnItemUsedStateChanged(bool pressed);

public:
	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_OnUsePowerWhenOutOfAmmo();

	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_OnUsePowerWhenInCooldown();

	UFUNCTION(BlueprintPure)
	ASlasherPlayer* GetSlasher() const;

	UFUNCTION(BlueprintPure)
	UKnivesLauncher* GetLauncher() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnUsePowerWhenOutOfAmmo();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnUsePowerWhenInCooldown();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnLaunch();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnComboScoreChanged(float scoreNormalizedForAudio);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnComboFinished(bool isSRankCombo);

	UFUNCTION()
	void Authority_SpawnReloadInteractionOnLockers();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AThrowingKnives();
};

FORCEINLINE uint32 GetTypeHash(const AThrowingKnives) { return 0; }
