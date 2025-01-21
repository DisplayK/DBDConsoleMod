#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "ESkillCheckCustomType.h"
#include "WiggleMotionComponent.generated.h"

class UDBDCharacterMovementComponent;
class ADBDPlayer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UWiggleMotionComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ADBDPlayer* _carriedPlayer;

	UPROPERTY(Transient, Export)
	UDBDCharacterMovementComponent* _ownerMovementComponent;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _goodSkillCheckBumpsAmplitude;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _greatSkillCheckBumpsAmplitude;

public:
	UFUNCTION(BlueprintCallable)
	void SetIsBeingWiggled(const bool isBeingWiggled);

private:
	UFUNCTION(Server, Reliable)
	void Server_SetIsBeingWiggled(const bool isBeingWiggled);

	UFUNCTION()
	void OnWiggleSkillCheckEnd(bool hadInput, bool success, bool bonus, ESkillCheckCustomType type, ADBDPlayer* player);

	UFUNCTION()
	void OnSurvivorRemoved(ADBDPlayer* target);

	UFUNCTION()
	void OnSurvivorPickedUp(ADBDPlayer* target);

	UFUNCTION()
	void OnHideWiggleSkillCheck(ESkillCheckCustomType type);

public:
	UWiggleMotionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UWiggleMotionComponent) { return 0; }
