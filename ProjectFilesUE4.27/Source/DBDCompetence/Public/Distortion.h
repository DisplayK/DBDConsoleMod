#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Distortion.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDistortion : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _activationDurations;

	UPROPERTY(ReplicatedUsing=OnRep_AuraBlockIsActive)
	bool _auraBlockIsActive;

	UPROPERTY(EditDefaultsOnly)
	float _regainTokenDurationTimer;

private:
	UFUNCTION()
	void OnRep_AuraBlockIsActive();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnAuraBlockedCosmetic();

public:
	UFUNCTION(BlueprintPure)
	bool AuraBlockCanBeActive() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDistortion();
};

FORCEINLINE uint32 GetTypeHash(const UDistortion) { return 0; }
