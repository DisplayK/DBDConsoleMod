#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "BlinkPowerItem.generated.h"

class UChargeableComponent;
class UInteractor;

UCLASS()
class THENURSE_API ABlinkPowerItem : public ACollectable
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _powerInteractor;

	UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _blinkChargeable;

public:
	ABlinkPowerItem();
};

FORCEINLINE uint32 GetTypeHash(const ABlinkPowerItem) { return 0; }
