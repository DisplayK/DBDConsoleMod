#pragma once

#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "OnryoPowerPresentationComponent.generated.h"

class UOnryoTVInitialCooldownStateComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEONRYO_API UOnryoPowerPresentationComponent : public UPresentationItemProgressComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UOnryoTVInitialCooldownStateComponent* _cooldownState;

public:
	UOnryoPowerPresentationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UOnryoPowerPresentationComponent) { return 0; }
