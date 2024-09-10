#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EBloodOrbVisibilityMode.h"
#include "Engine/EngineTypes.h"
#include "BloodOrbOverlapComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UBloodOrbOverlapComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_CurrentOverlappingOrbs)
	int32 _currentOverlappingOrbs;

private:
	UFUNCTION()
	void OnRep_CurrentOverlappingOrbs(int32 previousOverlappingOrbs);

	UFUNCTION()
	void Authority_OnDestroyedBloodOrb(AActor* destroyedActor);

	UFUNCTION()
	void Authority_OnBloodOrbVisibilityModeChanged(EBloodOrbVisibilityMode visibilityMode);

	UFUNCTION()
	void Authority_OnBloodOrbEndOverlap(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void Authority_OnBloodOrbBeginOverlap(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UBloodOrbOverlapComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBloodOrbOverlapComponent) { return 0; }
