#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AkAmbientSound.generated.h"

class UAkAudioEvent;
class UAkComponent;

UCLASS()
class AKAUDIO_API AAkAmbientSound : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY()
	UAkAudioEvent* AkAudioEvent_DEPRECATED;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export)
	UAkComponent* AkComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StopWhenOwnerIsDestroyed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AutoPost;

public:
	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void StopAmbientSound();

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void StartAmbientSound();

public:
	AAkAmbientSound();
};

FORCEINLINE uint32 GetTypeHash(const AAkAmbientSound) { return 0; }
