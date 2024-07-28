#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "OnActorDetected.h"
#include "Components/ActorComponent.h"
#include "ActorDetectorComponent.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UActorDetectorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnActorDetected OnActorDetected;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TArray<UClass*> CollectedTypes;

private:
	UPROPERTY(Export)
	UPrimitiveComponent* _primitive;

public:
	UFUNCTION(BlueprintCallable)
	void SetDetectionPrimitive(UPrimitiveComponent* primitive);

protected:
	UFUNCTION()
	void OnOverlapEnter(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:
	UActorDetectorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UActorDetectorComponent) { return 0; }
