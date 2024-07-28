#pragma once

#include "CoreMinimal.h"
#include "MontagePlaybackDefinition.h"
#include "Components/ActorComponent.h"
#include "ECamperDamageState.h"
#include "ScreamComponent.generated.h"

class UPerkManager;
class UMontagePlayer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UScreamComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UPerkManager* _perkManager;

	UPROPERTY(Transient, Export)
	UMontagePlayer* _montagePlayer;

public:
	UFUNCTION(BlueprintCallable)
	bool TriggerScreamEventsIfPossible(bool fireLoudNoiseEvent, float audibleRange);

	UFUNCTION(BlueprintCallable)
	bool TriggerScreamEventsAndAndAnimationIfPossible(bool fireLoudNoiseEvent, FMontagePlaybackDefinition montageDefinition, float audibleRange);

private:
	UFUNCTION()
	void OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);

public:
	UFUNCTION(BlueprintPure)
	bool CanScream() const;

public:
	UScreamComponent();
};

FORCEINLINE uint32 GetTypeHash(const UScreamComponent) { return 0; }
