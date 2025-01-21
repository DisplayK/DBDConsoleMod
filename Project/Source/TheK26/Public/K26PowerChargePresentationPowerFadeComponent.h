#pragma once

#include "CoreMinimal.h"
#include "PresentationPowerFadeComponent.h"
#include "K26PowerChargePresentationPowerFadeComponent.generated.h"

class UK26AmmoHandlerComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UK26PowerChargePresentationPowerFadeComponent : public UPresentationPowerFadeComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UK26AmmoHandlerComponent* _ammoHandler;

public:
	UFUNCTION(BlueprintCallable)
	void SetDependencies(UK26AmmoHandlerComponent* ammoHandler);

public:
	UK26PowerChargePresentationPowerFadeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK26PowerChargePresentationPowerFadeComponent) { return 0; }
