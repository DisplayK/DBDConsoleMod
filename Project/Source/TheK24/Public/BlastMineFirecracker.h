#pragma once

#include "CoreMinimal.h"
#include "Firecracker.h"
#include "EBlastMineRemovedReason.h"
#include "BlastMineFirecracker.generated.h"

class AGenerator;
class USimpleStateMachine;
class UBlastMineVisibilityController;
class UBlastMineKickSensor;

UCLASS()
class THEK24_API ABlastMineFirecracker : public AFirecracker
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTrapRemovedBlueprintEvent, EBlastMineRemovedReason, removedReason);

public:
	UPROPERTY(BlueprintAssignable)
	FOnTrapRemovedBlueprintEvent OnTrapRemovedBlueprintEvent;

private:
	UPROPERTY(Transient)
	AGenerator* _trappedGenerator;

	UPROPERTY(VisibleAnywhere, Export)
	USimpleStateMachine* _stateMachine;

	UPROPERTY(VisibleAnywhere, Export)
	UBlastMineKickSensor* _kickSensor;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UBlastMineVisibilityController* _visibilityController;

	UPROPERTY(ReplicatedUsing=OnRep_Lifetime)
	float _lifetime;

	UPROPERTY(ReplicatedUsing=OnRep_AuthorityExplosionCount)
	int32 _authority_ExplosionCount;

	UPROPERTY(ReplicatedUsing=OnRep_AuthorityCurrentState)
	FName _authority_CurrentState;

private:
	UFUNCTION()
	void OnRep_Lifetime();

	UFUNCTION()
	void OnRep_AuthorityExplosionCount();

	UFUNCTION()
	void OnRep_AuthorityCurrentState();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ABlastMineFirecracker();
};

FORCEINLINE uint32 GetTypeHash(const ABlastMineFirecracker) { return 0; }
