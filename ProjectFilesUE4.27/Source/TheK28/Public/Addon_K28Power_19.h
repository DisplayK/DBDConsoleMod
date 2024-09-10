#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Addon_K28Power_19.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K28Power_19 : public UOnEventBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _blockingRadius;

	UPROPERTY(EditDefaultsOnly)
	float _blockDuration;

public:
	UAddon_K28Power_19();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K28Power_19) { return 0; }
