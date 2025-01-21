#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Engine/EngineTypes.h"
#include "HeadOn.generated.h"

class AActor;
class ALocker;
class UObject;
class ADBDPlayer;
class UPrimitiveComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UHeadOn : public UPerk
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Transient)
	bool IsPerformingHeadOn;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool ExhaustOnlyOnSuccessfulStun;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool StunKillersEnteringStunZone;

protected:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _hideDuration;

private:
	UPROPERTY(Transient)
	ALocker* _locker;

	UPROPERTY(Transient)
	TArray<AActor*> _stunnableActorsInZone;

private:
	UFUNCTION()
	void OnPawnOverlapExit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void OnPawnOverlapEnter(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	UFUNCTION(BlueprintCallable)
	void OnHeadOnAnimationComplete();

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_TriggerStunOnActor(UObject* stunnableInterfaceUObject, ADBDPlayer* stunner);

public:
	UFUNCTION(BlueprintPure)
	bool CanApplyHeadOnInteraction() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_ActivatePerk();

public:
	UHeadOn();
};

FORCEINLINE uint32 GetTypeHash(const UHeadOn) { return 0; }
