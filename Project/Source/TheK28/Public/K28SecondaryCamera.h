#pragma once

#include "CoreMinimal.h"
#include "SpectatingActorLinker.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "EK28NightCycleState.h"
#include "K28SecondaryCamera.generated.h"

UCLASS()
class AK28SecondaryCamera : public AActor, public ISpectatingActorLinker
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _minimumCameraPitchOrientationAngle;

	UPROPERTY(EditDefaultsOnly)
	float _maximumCameraPitchOrientationAngle;

	UPROPERTY(EditDefaultsOnly)
	float _observerRotationSpeed;

	UPROPERTY(EditDefaultsOnly)
	float _minTimeBetweenCameraRotationUpdateRPC;

	UPROPERTY(EditDefaultsOnly)
	float _survivorGrabTransition_CameraRotationEndPercentage;

	UPROPERTY(EditDefaultsOnly)
	float _survivorGrabTransition_DistanceFromLocker;

	UPROPERTY(Replicated)
	bool _isKillerPlayerViewTarget;

private:
	UFUNCTION(Server, Reliable)
	void Server_SetIsKillerPlayerViewTarget(bool isKillerPlayerViewTarget);

	UFUNCTION(Server, Unreliable)
	void Server_SetCameraOrientation(FRotator newOrientation);

	UFUNCTION()
	void OnRep_IsKillerPlayerViewTarget();

	UFUNCTION()
	void OnLevelReadyToPlay();

public:
	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_SetCameraOrientation(FRotator newOrientation, bool isRelativeRotation);

	UFUNCTION(BlueprintPure)
	bool GetIsKillerPlayerViewTarget() const;

	UFUNCTION(BlueprintPure)
	FRotator GetCameraWorldRotation() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_UpdateDarknessPlaneVisibility(bool isVisible);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerTeleportStartVisuals();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerTeleportEndVisuals();

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerFadeOut();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerFadeIn();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnNightCycleChanged(EK28NightCycleState newNightCycleState);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerExitLocker();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerEnterLocker();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnIsLocallyObservingKillerChanged(bool isLocallyObservingKiller);

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_DisableAllEffects();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK28SecondaryCamera();
};

FORCEINLINE uint32 GetTypeHash(const AK28SecondaryCamera) { return 0; }
