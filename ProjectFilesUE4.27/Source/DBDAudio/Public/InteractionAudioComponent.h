#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NonTunableStat.h"
#include "InteractionAudioComponent.generated.h"

class UAkComponent;
class UAkAudioEvent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDAUDIO_API UInteractionAudioComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UAkComponent* _audioComponent;

private:
	UPROPERTY(EditAnywhere)
	FNonTunableStat _audioRadius;

public:
	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	bool PostAkEvent(UAkAudioEvent* akEvent);

public:
	UInteractionAudioComponent();
};

FORCEINLINE uint32 GetTypeHash(const UInteractionAudioComponent) { return 0; }
