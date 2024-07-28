#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "WereGonnaLiveForever.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UWereGonnaLiveForever : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _healSpeedIncrease;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _enduranceEffectLevels;

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _healSpeedFromDyingStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _enduranceEffect;

	UPROPERTY(ReplicatedUsing=OnRep_PerkEnabled, Transient)
	bool _isPerkEnabled;

private:
	UFUNCTION()
	void OnRep_PerkEnabled();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UWereGonnaLiveForever();
};

FORCEINLINE uint32 GetTypeHash(const UWereGonnaLiveForever) { return 0; }
