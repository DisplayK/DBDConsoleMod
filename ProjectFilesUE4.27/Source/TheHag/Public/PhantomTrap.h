#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "PhantomTrap.generated.h"

class UTerrorRadiusEmitterComponent;
class USkeletalMeshComponent;
class USceneComponent;
class ASlasherPlayer;
class USphereComponent;
class ACamperPlayer;

UCLASS()
class THEHAG_API APhantomTrap : public AInteractable
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UTerrorRadiusEmitterComponent* _terrorRadiusEmitter;

	UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isHighlighted;

	UPROPERTY(EditDefaultsOnly)
	float _camperOutlineDuration;

	UPROPERTY(EditAnywhere)
	float _lineOfSightTraceMinInterval;

	UPROPERTY(EditAnywhere)
	float _speedTolerance;

	UPROPERTY(Transient, Export)
	USceneComponent* _trapLocation;

	UPROPERTY(Transient, Export)
	USphereComponent* _triggerZone;

protected:
	UFUNCTION(BlueprintCallable)
	void OnFlashlightLitChanged(bool isLit);

public:
	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool IsTrapSet() const;

protected:
	UFUNCTION(BlueprintCallable)
	void InitializeTerrorRadiusEmitter(ASlasherPlayer* OwningSlasher);

public:
	UFUNCTION(BlueprintImplementableEvent)
	USkeletalMeshComponent* GetMesh() const;

protected:
	UFUNCTION(BlueprintCallable)
	bool CanActivateTrap(ACamperPlayer* camper, bool isInUse);

public:
	APhantomTrap();
};

FORCEINLINE uint32 GetTypeHash(const APhantomTrap) { return 0; }
