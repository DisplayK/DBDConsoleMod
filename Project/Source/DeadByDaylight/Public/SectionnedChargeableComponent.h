#pragma once

#include "CoreMinimal.h"
#include "ChargeableComponent.h"
#include "SectionnedChargeableComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USectionnedChargeableComponent : public UChargeableComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	uint8 _sections;

public:
	UFUNCTION(BlueprintPure)
	float GetSectionChargeRemaining() const;

public:
	USectionnedChargeableComponent();
};

FORCEINLINE uint32 GetTypeHash(const USectionnedChargeableComponent) { return 0; }
