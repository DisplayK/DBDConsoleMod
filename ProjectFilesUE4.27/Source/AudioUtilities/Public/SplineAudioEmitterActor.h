#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SplineAudioEmitterActor.generated.h"

class UAkComponent;
class USceneComponent;
class USplineComponent;

UCLASS()
class AUDIOUTILITIES_API ASplineAudioEmitterActor : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, meta=(BindWidgetOptional))
	USceneComponent* _root;

	UPROPERTY(EditDefaultsOnly, meta=(BindWidgetOptional))
	USplineComponent* _theSpline;

	UPROPERTY(EditDefaultsOnly, meta=(BindWidgetOptional))
	UAkComponent* _emitter;

public:
	ASplineAudioEmitterActor();
};

FORCEINLINE uint32 GetTypeHash(const ASplineAudioEmitterActor) { return 0; }
