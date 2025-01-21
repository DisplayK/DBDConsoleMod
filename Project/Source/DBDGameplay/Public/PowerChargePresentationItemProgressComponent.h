#pragma once

#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "PowerChargePresentationItemProgressComponent.generated.h"

class UPowerChargeComponent;
class UPowerToggleComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UPowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UPowerChargeComponent* _powerChargeComponent;

private:
	UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPowerToggleComponent* _powerToggleComponent;

	UPROPERTY(EditDefaultsOnly)
	float _chargeReadyThreshold;

public:
	UPowerChargePresentationItemProgressComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPowerChargePresentationItemProgressComponent) { return 0; }
