#pragma once

#include "CoreMinimal.h"
#include "BlindFlashlightableLightingStrategy.h"
#include "SisterBlindFlashlightableLightingStrategy.generated.h"

class AConjoinedTwin;

UCLASS(EditInlineNew)
class USisterBlindFlashlightableLightingStrategy : public UBlindFlashlightableLightingStrategy
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void OnTwinSet(AConjoinedTwin* twin);

public:
	USisterBlindFlashlightableLightingStrategy();
};

FORCEINLINE uint32 GetTypeHash(const USisterBlindFlashlightableLightingStrategy) { return 0; }
