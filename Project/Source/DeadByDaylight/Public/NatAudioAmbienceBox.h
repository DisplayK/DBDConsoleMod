#pragma once

#include "CoreMinimal.h"
#include "AmbienceBoxComponent.h"
#include "Engine/EngineTypes.h"
#include "NatAudioAmbienceBox.generated.h"

class UAkAudioEvent;
class UPrimitiveComponent;
class AActor;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UNatAudioAmbienceBox : public UAmbienceBoxComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* _onBeginOverlapAudioEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* _onEndOverlapAudioEvent;

protected:
	UFUNCTION()
	void OnEndOverlapAudioAmbience(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void OnBeginOverlapAudioAmbience(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	UNatAudioAmbienceBox();
};

FORCEINLINE uint32 GetTypeHash(const UNatAudioAmbienceBox) { return 0; }
