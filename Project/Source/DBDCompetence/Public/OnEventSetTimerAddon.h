#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "OnEventSetTimerAddon.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UOnEventSetTimerAddon : public UOnEventBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _addonEffectTime;

public:
	UOnEventSetTimerAddon();
};

FORCEINLINE uint32 GetTypeHash(const UOnEventSetTimerAddon) { return 0; }
