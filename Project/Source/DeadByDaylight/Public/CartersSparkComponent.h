#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "CartersSparkComponent.generated.h"

class UInteractionDefinition;
class ADBDPlayer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCartersSparkComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _staticBlastEnabled;

	UPROPERTY(Transient)
	TArray<ADBDPlayer*> _totallyInsanePlayers;

	UPROPERTY(Transient)
	ADBDPlayer* _owningPlayer;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxMadnessTier;

public:
	UFUNCTION(BlueprintCallable)
	void TriggerStaticBlastCooldown();

	UFUNCTION(BlueprintCallable)
	void TriggerShockTherapyCooldown();

private:
	UFUNCTION()
	void OnRequestAndBeginInteraction(UInteractionDefinition* interaction);

public:
	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void Multicast_OnShockTherapyCooldownCheatEntered();

	UFUNCTION(BlueprintPure)
	bool IsStaticBlastOnCooldown() const;

	UFUNCTION(BlueprintPure)
	bool IsShockTherapyOnCooldown() const;

	UFUNCTION(BlueprintPure)
	float GetStaticBlastCooldownPercentElapsed() const;

private:
	UFUNCTION()
	void Authority_RegisterToGameEvents();

public:
	UFUNCTION(BlueprintCallable)
	void Authority_AddTotallyInsaneSurvivor(ADBDPlayer* insaneSurvivor);

public:
	UCartersSparkComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCartersSparkComponent) { return 0; }
