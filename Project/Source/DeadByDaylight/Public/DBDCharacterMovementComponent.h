#pragma once

#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "SnappingData.h"
#include "MontagePlaybackDefinition.h"
#include "MontageStopDefinition.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "UObject/NoExportTypes.h"
#include "EMovementCurveType.h"
#include "YawAndPitchRotator_NetQuantize32.h"
#include "DBDCharacterMovementComponent.generated.h"

class UBaseCharacterVelocityAdditiveStrategy;
class UBaseInputAccelerationConstraintStrategy;
class UCurveFloat;
class UBaseCharacterRotationStrategy;
class AActor;
class UAnimMontage;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProjectedWallSlidingFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RandomInputFrontMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RandomInputSideMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RandomInputBackMultiplier;

private:
	UPROPERTY(EditAnywhere)
	bool _forceUseDropStaggerFix;

	UPROPERTY(Transient, Export)
	UBaseCharacterVelocityAdditiveStrategy* _velocityAdditiveStrategy;

	UPROPERTY(Transient, Export)
	UBaseInputAccelerationConstraintStrategy* _inputAccelerationConstraintStrategy;

	UPROPERTY(Transient, Export)
	UBaseCharacterRotationStrategy* _rotationStrategy;

	UPROPERTY(Transient)
	AActor* _lookAtTarget;

public:
	UFUNCTION(BlueprintCallable)
	void SetRandomInputAmplitude(float value);

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_StopMontage(float timestamp, const FMontageStopDefinition montageStopDefinition);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_StartSnapping(float timestamp, const FSnappingData data, int32 snappingCallCount);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetStopSnapping(float timestamp, const bool snapToFinalDestination);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetMaxSpeedOverride(float timestamp, float value, bool isSet);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetMaxSpeedMultiplierScalar(float timestamp, float value);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetMaxAcceleration(float timestamp, float value);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetIgnorePawnCollisionOverride(float timestamp, bool isIgnoringPawnCollision);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetGroundFriction(float timestamp, float value);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetAdditiveMaxSpeedScalar(float timestamp, float value);

protected:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_ReplicateControlRotation(uint8 clientRoll, uint32 view);

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_RemoveMaxSpeedMovementCurve(float timestamp, const uint32 curveNetId, const EMovementCurveType movementCurveType);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_PlayMontage(float timestamp, const FMontagePlaybackDefinition montagePlaybackDefinition);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Launch(float timestamp, FVector launchVelocity, int32 launchCallCount);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_AddMaxSpeedMovementCurve(float timestamp, const uint32 curveNetId, float duration, const EMovementCurveType movementCurveType);

	UFUNCTION()
	void OnPreMontageStop(const FMontageStopDefinition montageDefinition, const UAnimMontage* montage);

	UFUNCTION()
	void OnMontageStarted(const FMontagePlaybackDefinition& montageDefinition, const UAnimMontage* montage);

public:
	UFUNCTION(BlueprintCallable)
	void Local_AddMaxSpeedMultiplierCurve(const UCurveFloat* curve, float duration, bool autoRemove);

	UFUNCTION(BlueprintPure)
	bool IsApplyingRandomInput() const;

private:
	UFUNCTION(Exec)
	void DBD_SimulateHack_LocalLaunch(const float xVelocity, const float yVelocity, const float zVelocity);

protected:
	UFUNCTION(Client, Reliable)
	void Client_TeleportTo(FVector_NetQuantize100 location, FYawAndPitchRotator_NetQuantize32 rotation);

	UFUNCTION(Client, Reliable)
	void Client_Stop();

	UFUNCTION(Client, Reliable)
	void Client_PreventMovement(const bool value);

public:
	UDBDCharacterMovementComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDCharacterMovementComponent) { return 0; }
