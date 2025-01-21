#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "AnimationMontageDescriptor.h"
#include "KillInteractionDefinition.generated.h"

class ADBDPlayer;
class ACamperPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UKillInteractionDefinition : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	bool _disableFOVSystemDuringInteraction;

	UPROPERTY(EditDefaultsOnly)
	bool _overrideSlasherFieldOfViewDuringInteraction;

	UPROPERTY(EditDefaultsOnly)
	bool _overrideCamperFieldOfViewDuringInteraction;

	UPROPERTY(EditDefaultsOnly)
	bool _camperCopySlasherFOVCurve;

	UPROPERTY(EditAnywhere)
	FName _cameraFOVCurveName;

private:
	UPROPERTY(EditAnywhere)
	TArray<FString> _nonOverrideableTargetInteractions;

	UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	bool _chargeCompleted;

	UPROPERTY(EditDefaultsOnly)
	bool _isKillShownInThirdPerson;

	UPROPERTY(EditDefaultsOnly)
	bool _manuallyManageMeshHiding;

	UPROPERTY(EditDefaultsOnly)
	bool _survivorAnimationLastAfterInteractionEnds;

	UPROPERTY(EditDefaultsOnly)
	float _maximumDelayBeforeSurvivorDeath;

	UPROPERTY(EditAnywhere)
	FAnimationMontageDescriptor _exitMontage;

	UPROPERTY(EditDefaultsOnly)
	float _slasherFacingTolerance;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnMoriCancelled();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnKillAudioActivation(const bool active, ADBDPlayer* interactingPlayer);

	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetOwningSurvivor() const;

	UFUNCTION(BlueprintNativeEvent)
	FAnimationMontageDescriptor GetExitAnimationMontage() const;

	UFUNCTION(BlueprintPure)
	bool GetChargeCompleted() const;

public:
	UKillInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UKillInteractionDefinition) { return 0; }
