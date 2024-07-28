#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnPortalEffectsApplied.h"
#include "DemogorgonPortalRadiusDetectorComponent.generated.h"

class ADemogorgonPortal;
class ADBDPlayer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UDemogorgonPortalRadiusDetectorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPortalEffectsAppliedMultiDelegate);

private:
	UPROPERTY(Transient)
	TArray<ADemogorgonPortal*> Portals;

	UPROPERTY(ReplicatedUsing=OnRep_PlayersInsideRadius, Transient)
	TArray<ADBDPlayer*> _playersInsideRadius;

private:
	UFUNCTION()
	void OnRep_PlayersInsideRadius();

	UFUNCTION()
	void Authority_OnLevelReadyToPlay();

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_CallOnPortalEffectsApplied(FOnPortalEffectsApplied callback);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDemogorgonPortalRadiusDetectorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDemogorgonPortalRadiusDetectorComponent) { return 0; }
