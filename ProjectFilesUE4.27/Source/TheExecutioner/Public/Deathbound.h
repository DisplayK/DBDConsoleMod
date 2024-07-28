#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Deathbound.generated.h"

class ACamperPlayer;
class ADBDPlayer;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDeathbound : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _distanceFromRescuedSurvivorForOblivious;

	UPROPERTY(EditDefaultsOnly)
	float _activationDuration;

	UPROPERTY(EditDefaultsOnly)
	float _rescueDistanceFromKillerToActivate;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float _revealLocationDuration;

	UPROPERTY(EditDefaultsOnly)
	bool _unhook;

	UPROPERTY(EditDefaultsOnly)
	bool _fromDyingState;

	UPROPERTY(Export)
	TArray<UStatusEffect*> _obliviousStatusEffects;

	UPROPERTY(ReplicatedUsing=OnRep_SurvivorsToReveal, Transient)
	TArray<ADBDPlayer*> _survivorsToReveal;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _obliviousEffectClass;

private:
	UFUNCTION()
	void OnRep_SurvivorsToReveal();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void MakeSurvivorScream(const ACamperPlayer* survivor);

public:
	UFUNCTION(BlueprintPure)
	float GetRevealLocationDuration() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDeathbound();
};

FORCEINLINE uint32 GetTypeHash(const UDeathbound) { return 0; }
