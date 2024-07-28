#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AkObservedPlayerSoundLoop.h"
#include "KillerFlashlightSFXComponent.generated.h"

class UFlashlightTargetFXComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UKillerFlashlightSFXComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	FAkObservedPlayerSoundLoop _targetSoundLoop;

private:
	UPROPERTY(Transient, Export)
	TArray<UFlashlightTargetFXComponent*> _flashlightTargets;

public:
	UKillerFlashlightSFXComponent();
};

FORCEINLINE uint32 GetTypeHash(const UKillerFlashlightSFXComponent) { return 0; }
