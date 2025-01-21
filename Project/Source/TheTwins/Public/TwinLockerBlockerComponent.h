#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AnimationMontageDescriptor.h"
#include "Templates/SubclassOf.h"
#include "TwinLockerBlockerComponent.generated.h"

class UInteractionDefinition;
class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UTwinLockerBlockerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UInteractionDefinition>> _interactionClasses;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UInteractionDefinition>> _interactionsToDisableOnLockerClasses;

private:
	UFUNCTION()
	void OnPushedMontageStopped(const FAnimationMontageDescriptor montageDescriptor);

	UFUNCTION()
	void OnPushedMontageStarted(const FAnimationMontageDescriptor montageDescriptor, const float rate);

	UFUNCTION()
	void OnPushedMontageEnded(const FAnimationMontageDescriptor montageDescriptor, bool interrupted);

	UFUNCTION()
	void OnPlayerInLockerChanged(ADBDPlayer* previousPlayerInLocker, ADBDPlayer* newPlayerInLocker);

public:
	UFUNCTION(BlueprintPure)
	bool IsTwinAttachedToLocker() const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTwinOnLockerChanged(bool isOnLocker);

private:
	UFUNCTION()
	void Authority_OnLevelReadyToPlay();

public:
	UTwinLockerBlockerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTwinLockerBlockerComponent) { return 0; }
