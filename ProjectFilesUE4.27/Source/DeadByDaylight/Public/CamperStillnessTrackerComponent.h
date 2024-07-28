#pragma once

#include "CoreMinimal.h"
#include "StillnessTrackerComponent.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineTypes.h"
#include "CamperStillnessTrackerComponent.generated.h"

class ACamperExposerInstance;
class UExposerInteriorZoneComponent;
class UPrimitiveComponent;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCamperStillnessTrackerComponent : public UStillnessTrackerComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ChickenShitModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LoudNoiseTime;

private:
	UPROPERTY(Transient)
	TArray<float> ExposerSpawnTimes;

	UPROPERTY(Transient)
	TArray<float> ExposerDespawnTimes;

	UPROPERTY(Transient)
	TSubclassOf<ACamperExposerInstance> _exposerInstanceToSpawn;

	UPROPERTY(Transient)
	TArray<ACamperExposerInstance*> _exposerInstances;

	UPROPERTY(Transient, Export)
	UExposerInteriorZoneComponent* _interiorZone;

protected:
	UFUNCTION()
	void OnOverlapExit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	void OnOverlapEnter(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnLevelReadyToPlay();

public:
	UFUNCTION(BlueprintCallable)
	void ExitInteriorZone(UExposerInteriorZoneComponent* zone);

	UFUNCTION(BlueprintCallable)
	void EnterInteriorZone(UExposerInteriorZoneComponent* zone);

public:
	UCamperStillnessTrackerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCamperStillnessTrackerComponent) { return 0; }
