#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ItemAddon.h"
#include "GameplayTagContainer.h"
#include "AnxiousGaspAddon.generated.h"

class UCapsuleComponent;
class UAkAudioEvent;
class AActor;
class ACamperPlayer;
class UPrimitiveComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class THENURSE_API UAnxiousGaspAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	UAkAudioEvent* _screamSoundEvent;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _scoreEventTag;

	UPROPERTY(EditDefaultsOnly)
	float _detectionCapsuleHalfHeight;

	UPROPERTY(EditDefaultsOnly)
	float _detectionCapsuleRadius;

	UPROPERTY(Transient, Export)
	UCapsuleComponent* _survivorDetector;

	UPROPERTY(Transient)
	TSet<AActor*> _alreadyDetectedPlayers;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void PlayScream(const ACamperPlayer* survivor) const;

private:
	UFUNCTION()
	void OnDetectorOverlapBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	UAnxiousGaspAddon();
};

FORCEINLINE uint32 GetTypeHash(const UAnxiousGaspAddon) { return 0; }
