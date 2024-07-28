#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "K29SurvivorCarriableComponent.generated.h"

class ACamperPlayer;
class ASlasherPlayer;

UCLASS(BlueprintType, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEK29_API UK29SurvivorCarriableComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FName _rootJointName;

private:
	UPROPERTY(Transient)
	FRotator _startingRotation;

	UPROPERTY(Transient)
	FVector _startingPosition;

	UPROPERTY(Transient)
	bool _isCarriedByK29Rush;

	UPROPERTY(Transient)
	float _killerIngoreTime;

	UPROPERTY(ReplicatedUsing=OnRep_OwningSurvivor)
	TWeakObjectPtr<ACamperPlayer> _owningSurvivor;

private:
	UFUNCTION()
	void OnRep_OwningSurvivor();

	UFUNCTION()
	void OnKillerSet(ASlasherPlayer* killer);

protected:
	UFUNCTION(BlueprintCallable)
	bool IsBeingCarriedByK29RushOrMarkedForThrow();

public:
	UFUNCTION()
	void EnableCollision();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK29SurvivorCarriableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK29SurvivorCarriableComponent) { return 0; }
