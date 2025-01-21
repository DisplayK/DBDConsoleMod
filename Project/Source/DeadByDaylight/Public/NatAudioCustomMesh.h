#pragma once

#include "CoreMinimal.h"
#include "AudioCustomMeshComponent.h"
#include "Engine/EngineTypes.h"
#include "NatAudioCustomMesh.generated.h"

class UAkAudioEvent;
class UPrimitiveComponent;
class AActor;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UNatAudioCustomMesh : public UAudioCustomMeshComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* _onBeginOverlapAudioEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* _onEndOverlapAudioEvent;

protected:
	UFUNCTION()
	void OnEndOverlapAudioMesh(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void OnBeginOverlapAudioMesh(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	UNatAudioCustomMesh();
};

FORCEINLINE uint32 GetTypeHash(const UNatAudioCustomMesh) { return 0; }
