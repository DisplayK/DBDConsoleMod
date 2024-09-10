#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PortalRestrictedLocation.h"
#include "DemogorgonPortalPlacerStateComponent.generated.h"

class ADemogorgonPortal;
class ASlasherPlayer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class THEDEMOGORGON_API UDemogorgonPortalPlacerStateComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDemogorgonTeleportCooldownComplete);

public:
	UPROPERTY(BlueprintAssignable)
	FOnDemogorgonTeleportCooldownComplete OnTeleportCooldownComplete;

private:
	UPROPERTY(Replicated, Transient)
	int32 _remainingPortals;

	UPROPERTY(Replicated, Transient)
	TArray<ADemogorgonPortal*> _placedPortals;

	UPROPERTY(Replicated, Transient)
	TArray<FPortalRestrictedLocation> _restrictedPortalLocations;

private:
	UFUNCTION()
	void UpdateRemainingPortalCount();

public:
	UFUNCTION()
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintPure)
	bool IsUsePortalCooldownDone() const;

private:
	UFUNCTION()
	void InitializeTunableValues(ASlasherPlayer* killer);

public:
	UFUNCTION(BlueprintPure)
	float GetTeleportDuration() const;

	UFUNCTION(BlueprintPure)
	int32 GetRemainingPortalCount() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDemogorgonPortalPlacerStateComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDemogorgonPortalPlacerStateComponent) { return 0; }
