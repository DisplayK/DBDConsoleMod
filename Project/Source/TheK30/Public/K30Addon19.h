#pragma once

#include "CoreMinimal.h"
#include "K30ApplyStatusOnWakeUpAddon.h"
#include "K30Addon19.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK30Addon19 : public UK30ApplyStatusOnWakeUpAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	int32 _numberOfSummonsBeforeEffect;

	UPROPERTY(EditDefaultsOnly)
	float _distanceThresholdForEffect;

public:
	UK30Addon19();
};

FORCEINLINE uint32 GetTypeHash(const UK30Addon19) { return 0; }
