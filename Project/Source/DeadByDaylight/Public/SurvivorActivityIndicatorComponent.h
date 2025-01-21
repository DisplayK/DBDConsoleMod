#pragma once

#include "CoreMinimal.h"
#include "SurvivorActivity.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "ECamperDamageState.h"
#include "ECamperImmobilizeState.h"
#include "SurvivorActivityIndicatorComponent.generated.h"

class ADBDPlayer;
class USurvivorActivityData;
class UChargeableComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class USurvivorActivityIndicatorComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	USurvivorActivityData* _activitiesDataAsset;

	UPROPERTY(EditDefaultsOnly)
	float _durationNeededToEnableUI;

private:
	UFUNCTION()
	void OnPlayerPickedUp(ADBDPlayer* picker);

	UFUNCTION()
	void OnPlayerImmobilizeStateChanged(const ECamperImmobilizeState oldImmobilizeState, const ECamperImmobilizeState newImmobilizeState);

	UFUNCTION()
	void OnPlayerDropped();

	UFUNCTION()
	void OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);

	UFUNCTION()
	void OnChargeableProgressChanged(UChargeableComponent* chargeableComponent, float totalPercentComplete);

	UFUNCTION()
	void HandleStartActivityIfStillInEffect(const FSurvivorActivity activityViewInfo, const FGameplayTag tag);

public:
	USurvivorActivityIndicatorComponent();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorActivityIndicatorComponent) { return 0; }
