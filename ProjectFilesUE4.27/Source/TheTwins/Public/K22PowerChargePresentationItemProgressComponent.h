#pragma once

#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "K22PowerChargePresentationItemProgressComponent.generated.h"

class UPowerChargeComponent;
class AConjoinedTwin;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UK22PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPowerChargeComponent* _powerChargeComponent;

private:
	UFUNCTION()
	void OnTwinSet(AConjoinedTwin* twin);

public:
	UK22PowerChargePresentationItemProgressComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK22PowerChargePresentationItemProgressComponent) { return 0; }
