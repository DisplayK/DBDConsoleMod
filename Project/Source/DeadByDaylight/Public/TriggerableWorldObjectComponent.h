#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "TriggerReset.h"
#include "Triggered.h"
#include "Engine/EngineTypes.h"
#include "TriggerableWorldObjectComponent.generated.h"

class ADBDPlayer;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UTriggerableWorldObjectComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FTriggered OnTriggered;

	UPROPERTY(BlueprintAssignable)
	FTriggerReset OnTriggerReset;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _triggerResetTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _randomChance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _rollFrequency;

private:
	UPROPERTY(Export)
	TWeakObjectPtr<UPrimitiveComponent> _conditionalTriggerVolume;

	UPROPERTY(Transient)
	TSet<ADBDPlayer*> _conditionalVolumeOverlappingPlayers;

	UPROPERTY(Export)
	TWeakObjectPtr<UPrimitiveComponent> _guaranteedTriggerVolume;

public:
	UFUNCTION(BlueprintCallable)
	void SetGuaranteedTriggerVolume(UPrimitiveComponent* volume);

	UFUNCTION(BlueprintCallable)
	void SetConditionalTriggerVolume(UPrimitiveComponent* volume);

protected:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnTriggerReset();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnTriggered(AActor* instigator, FVector triggerLocation);

	UFUNCTION(BlueprintNativeEvent)
	void GetConditionalModifiers(ADBDPlayer* player, float& outAdditive, float& outMultiplicative);

	UFUNCTION(BlueprintNativeEvent)
	bool CanPlayerTriggerGuaranteed(ADBDPlayer* player);

	UFUNCTION(BlueprintNativeEvent)
	bool CanPlayerTriggerConditional(ADBDPlayer* player);

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_Trigger(AActor* instigator, FVector triggerLocation);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_ResetTrigger();

protected:
	UFUNCTION()
	void Authority_GuaranteedVolumeOverlap(UPrimitiveComponent* OverlappedComponent, AActor* other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitResult);

	UFUNCTION()
	void Authority_ConditionalVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	void Authority_ConditionalVolumeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitResult);

public:
	UTriggerableWorldObjectComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTriggerableWorldObjectComponent) { return 0; }
