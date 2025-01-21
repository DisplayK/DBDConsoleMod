#pragma once

#include "CoreMinimal.h"
#include "FlashlightTargetFXComponent.h"
#include "LightBurnableFlashlightTargetFXComponent.generated.h"

class ULightBurnable;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API ULightBurnableFlashlightTargetFXComponent : public UFlashlightTargetFXComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	ULightBurnable* _burnable;

public:
	ULightBurnableFlashlightTargetFXComponent();
};

FORCEINLINE uint32 GetTypeHash(const ULightBurnableFlashlightTargetFXComponent) { return 0; }
