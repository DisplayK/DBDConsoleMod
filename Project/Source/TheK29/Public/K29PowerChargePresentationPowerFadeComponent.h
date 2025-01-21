#pragma once

#include "CoreMinimal.h"
#include "PresentationPowerFadeComponent.h"
#include "K29PowerChargePresentationPowerFadeComponent.generated.h"

class UK29RushChargesHandlerComponent;
class ASlasherPlayer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UK29PowerChargePresentationPowerFadeComponent : public UPresentationPowerFadeComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UK29RushChargesHandlerComponent* _rushChargesHandlerComponent;

public:
	UFUNCTION(BlueprintCallable)
	void SetDependencies(UK29RushChargesHandlerComponent* ammoHandler);

private:
	UFUNCTION()
	void OnKillerSet(ASlasherPlayer* killer);

public:
	UK29PowerChargePresentationPowerFadeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK29PowerChargePresentationPowerFadeComponent) { return 0; }
