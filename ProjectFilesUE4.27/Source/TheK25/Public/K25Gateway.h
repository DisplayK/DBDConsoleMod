#pragma once

#include "CoreMinimal.h"
#include "SpectatingActorLinker.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "GameFramework/Actor.h"
#include "DBDGenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "FastTimer.h"
#include "K25Gateway.generated.h"

class UCameraComponent;
class UActorComponent;
class UAIPerceptionStimuliSourceComponent;

UCLASS()
class AK25Gateway : public AActor, public ISpectatingActorLinker, public IDBDGenericTeamAgentInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _rayCastZOffet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _rayCastLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> _distancePercentLocations;

	UPROPERTY(EditDefaultsOnly)
	float _survivorGatewayRotationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _minimumIndicatorVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _indicatorVelocityEasingFactor;

	UPROPERTY(EditAnywhere)
	float _minimumTimeBeforeTargetLocationMulticast;

	UPROPERTY(EditDefaultsOnly)
	float _gatewayNoiseEventTimeInterval;

	UPROPERTY(EditDefaultsOnly)
	float _gatewayNoiseEventRange;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDBDTunableRowHandle _minDistanceFromPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FTunableStat _maxDistanceFromPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDBDTunableRowHandle _gatewayPlacementSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDBDTunableRowHandle _pitchLevelChangeAngleThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDBDTunableRowHandle _pitchLevelChangeZoneThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDBDTunableRowHandle _maximumCameraPitchOrientationAngle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDBDTunableRowHandle _minimumCameraPitchOrientationAngle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDBDTunableRowHandle _maxGatewayPossessionDuration;

private:
	UPROPERTY(Transient, Export)
	UActorComponent* _visualComponent;

	UPROPERTY(Transient)
	FVector _targetLocation;

	UPROPERTY(VisibleAnywhere, Export)
	UCameraComponent* _cameraPlacementComponent;

	UPROPERTY(ReplicatedUsing=OnRep_IsGatewayPossessed)
	bool _isGatewayPossessed;

	UPROPERTY(ReplicatedUsing=OnRep_IsBeingPositionned, Transient)
	bool _isBeingPositionned;

	UPROPERTY(Transient)
	FFastTimer _possessionTimer;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent;

private:
	UFUNCTION(Server, Reliable)
	void Server_StartGatewayPossession(FVector possessionLocation, FRotator gatewayRotation);

	UFUNCTION(Server, Reliable)
	void Server_SetIsGatewayBeingPositionned(bool isBeingPositionned);

	UFUNCTION(Server, Unreliable)
	void Server_SetGatewayTargetLocation(FVector targetLocation, bool isValidLocation);

	UFUNCTION(Server, Unreliable)
	void Server_SetGatewayOrientation(FRotator rotation);

public:
	UFUNCTION(Server, Reliable)
	void Server_EndGatewayPossession();

private:
	UFUNCTION()
	void OnRep_IsGatewayPossessed();

	UFUNCTION()
	void OnRep_IsBeingPositionned();

	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_SetGatewayTargetLocation(FVector targetLocation, bool isValidLocation);

	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_SetGatewayOrientation(FRotator rotation);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetGatewayLocation(FVector possessionLocation);

public:
	UFUNCTION(BlueprintPure)
	bool IsGatewayPossessed() const;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	UCameraComponent* GetCameraComponent() const;

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerInvalidGatewayPlacementSFX();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerGatewayUnpossessedEffects();

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerGatewayPossessionCancel();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerGatewayPossessedEffects(const float transitionTime);

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerGatewayPlacementStop();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerGatewayPlacementStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerGatewayPlacementCancel();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SetKillerVisualVisibility(bool isVisible);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SetIsGatewayPositionValid(bool isGatewayPlacementValid);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK25Gateway();
};

FORCEINLINE uint32 GetTypeHash(const AK25Gateway) { return 0; }
