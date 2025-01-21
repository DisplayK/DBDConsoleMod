#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "HarpoonChainPositioner.generated.h"

class AHarpoonProp;
class ADBDPlayer;
class ARifleChain;
class AActor;
class AHarpoonProjectile;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEGUNSLINGER_API UHarpoonChainPositioner : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TSubclassOf<AHarpoonProp> _harpoonPropClass;

	UPROPERTY(EditAnywhere)
	FName _survivorAttachSocket;

	UPROPERTY(EditAnywhere)
	FName _animationSocket;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _reelBackToRifleSpeed;

	UPROPERTY(EditAnywhere)
	float _harpoonMinimumSnapBackDistance;

	UPROPERTY(Transient)
	AHarpoonProp* _harpoonProp;

	UPROPERTY(Transient)
	AHarpoonProjectile* _harpoonProjectile;

	UPROPERTY(Transient)
	ADBDPlayer* _collector;

	UPROPERTY(Transient)
	ARifleChain* _chain;

private:
	UFUNCTION()
	void OnOwnerCollected(ADBDPlayer* collector);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnHarpoonTravelingChanged(bool isTravelling);

	UFUNCTION(BlueprintImplementableEvent)
	void OnHarpoonLoadedOnRifle();

	UFUNCTION(BlueprintImplementableEvent)
	void OnCurrentHarpoonChanged(AActor* currentHarpoon);

public:
	UFUNCTION(BlueprintPure)
	AHarpoonProp* GetHarpoonProp() const;

	UFUNCTION(BlueprintPure)
	AActor* GetCurrentHarpoon() const;

	UFUNCTION(BlueprintCallable)
	void AttachToRifle();

	UFUNCTION(BlueprintCallable)
	void AttachToAnimSocket();

public:
	UHarpoonChainPositioner();
};

FORCEINLINE uint32 GetTypeHash(const UHarpoonChainPositioner) { return 0; }
