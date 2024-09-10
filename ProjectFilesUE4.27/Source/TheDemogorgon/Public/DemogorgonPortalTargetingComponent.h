#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DemogorgonPortalTargetingComponent.generated.h"

class ADemogorgonPortal;
class UDemogorgonPortalPlacerStateComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UDemogorgonPortalTargetingComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ADemogorgonPortal* _targetedPortal;

	UPROPERTY(Transient, Export)
	UDemogorgonPortalPlacerStateComponent* _portalPlacerState;

public:
	UFUNCTION(BlueprintCallable)
	void SetIsPorting(bool isPorting);

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetTargetedPortal(ADemogorgonPortal* targetedPortal);

	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void Multicast_SetTargetedPortal(ADemogorgonPortal* targetedPortal);

public:
	UFUNCTION(BlueprintCallable)
	ADemogorgonPortal* GetTargetedPortal();

public:
	UDemogorgonPortalTargetingComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDemogorgonPortalTargetingComponent) { return 0; }
