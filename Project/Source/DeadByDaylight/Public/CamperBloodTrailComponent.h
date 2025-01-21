#pragma once

#include "CoreMinimal.h"
#include "BloodTrailComponent.h"
#include "ECamperDamageState.h"
#include "CamperBloodTrailComponent.generated.h"

class UPerkManager;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCamperBloodTrailComponent : public UBloodTrailComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UPerkManager* _camperPerkManager;

private:
	UFUNCTION()
	void OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);

public:
	UCamperBloodTrailComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCamperBloodTrailComponent) { return 0; }
