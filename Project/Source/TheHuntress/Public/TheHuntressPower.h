#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "Templates/SubclassOf.h"
#include "TheHuntressPower.generated.h"

class UReloadHatchet;
class UAkComponent;
class ASlasherPlayer;
class UHatchetCooldown;
class UBaseProjectileLauncher;

UCLASS()
class ATheHuntressPower : public ACollectable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UReloadHatchet> _reloadHatchetClass;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintCosmetic)
	void StartHatchetShineCosmetic();

	UFUNCTION(BlueprintCallable)
	void SetPercentThrowStrength(const float percentStrength);

	UFUNCTION(BlueprintCallable)
	void SetHatchetVisible(const bool visible);

	UFUNCTION(BlueprintImplementableEvent)
	void PrintDebugThrowInfo();

	UFUNCTION(BlueprintPure)
	bool IsHatchetThrowFullyCharged() const;

	UFUNCTION(BlueprintPure)
	bool HasHatchet() const;

	UFUNCTION(BlueprintPure)
	ASlasherPlayer* GetOwningKiller() const;

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	UBaseProjectileLauncher* GetHatchetProjectileLauncher() const;

	UFUNCTION(BlueprintImplementableEvent)
	UHatchetCooldown* GetHatchetCooldown() const;

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	UAkComponent* GetAkAudioHatchetSpawner() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnThrowInteractionStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnThrowInteractionCancelled();

public:
	ATheHuntressPower();
};

FORCEINLINE uint32 GetTypeHash(const ATheHuntressPower) { return 0; }
