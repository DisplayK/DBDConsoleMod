#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DestroyDemogorgonPortalInteraction.generated.h"

class ADemogorgonPortal;
class AActor;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UDestroyDemogorgonPortalInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ADemogorgonPortal* _owningPortal;

private:
	UFUNCTION()
	void Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime);

public:
	UDestroyDemogorgonPortalInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UDestroyDemogorgonPortalInteraction) { return 0; }
