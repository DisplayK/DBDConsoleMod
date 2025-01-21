#pragma once

#include "CoreMinimal.h"
#include "BaseCamperCollectable.h"
#include "Medkit.generated.h"

class UParticleSystem;
class ADBDPlayer;
class UAkComponent;
class UAkAudioBank;
class UChargerComponent;
class UAkAudioEvent;

UCLASS()
class DBDGAMEPLAY_API AMedkit : public ABaseCamperCollectable
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UAkComponent* _akComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UChargerComponent* _charger;

	UPROPERTY(EditDefaultsOnly)
	UParticleSystem* _dustRingTemplate;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UAkAudioEvent* _medkitGetAkEvent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UAkAudioEvent* _medkitDropAkEvent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UAkAudioBank* _medkitBank;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float _healOtherChargeMultiplier;

public:
	UFUNCTION(BlueprintCallable)
	void UseCharge(float seconds);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnMedkitHealedCamper(ADBDPlayer* healedPlayer);

	UFUNCTION(BlueprintPure)
	bool HasCharge() const;

	UFUNCTION(BlueprintPure)
	float GetChargeMultiplier() const;

protected:
	UFUNCTION()
	void Authority_OnChargeStateChange(const bool empty);

	UFUNCTION()
	void Authority_OnAnyOngoingInteractionChanged(const bool isInteracting);

	UFUNCTION()
	void Authority_ConsumeIfNotInteracting();

public:
	AMedkit();
};

FORCEINLINE uint32 GetTypeHash(const AMedkit) { return 0; }
