#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "FlickerSettings.h"
#include "EFlickerType.h"
#include "OnryoVisibilityComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UOnryoVisibilityComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient)
	bool _isKillerVisible;

	UPROPERTY(Transient)
	bool _isInKillerSightRange;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _killerRevealingStateTags;

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _killerVisibleMaxDistance;

	UPROPERTY(EditDefaultsOnly)
	TMap<EFlickerType, FFlickerSettings> _flickerSettings;

	UPROPERTY(Transient)
	bool _isInIntroPhase;

	UPROPERTY(Transient)
	bool _isManifested;

	UPROPERTY(Transient)
	bool _isInManifestingTransition;

private:
	UFUNCTION()
	void OnLocallyObservedChanged();

	UFUNCTION()
	void OnKillerInSurvivorSightRangeChanged(const bool inRange);

public:
	UFUNCTION()
	void OnIntroCompleted();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnManifestationStateChanged(const bool isManifested, const bool isImmediateManifest);

public:
	UOnryoVisibilityComponent();
};

FORCEINLINE uint32 GetTypeHash(const UOnryoVisibilityComponent) { return 0; }
