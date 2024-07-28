#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "ZoneDetectorComponent.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UZoneDetectorComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	TArray<UPrimitiveComponent*> _zones;

	UPROPERTY(Transient)
	TArray<FName> _tags;

protected:
	UFUNCTION()
	void OnOverlapExit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	void OnOverlapEnter(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:
	UZoneDetectorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UZoneDetectorComponent) { return 0; }
