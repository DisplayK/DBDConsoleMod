#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "GassedStatusEffect.h"
#include "SurvivorGasCloudEffect.generated.h"

class AGasDizzyCosmeticEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class THECLOWN_API USurvivorGasCloudEffect : public UGassedStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite)
	AGasDizzyCosmeticEffect* _dizzyCosmeticEffect;

private:
	UPROPERTY(EditAnywhere)
	TSubclassOf<AGasDizzyCosmeticEffect> _gasDizzyCosmeticEffectClass;

	UPROPERTY(EditAnywhere)
	FTransform _dizzyEffectRelativeTransform;

public:
	USurvivorGasCloudEffect();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorGasCloudEffect) { return 0; }
