#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "TwinBaseAddon.generated.h"

class AConjoinedTwin;

UCLASS(meta=(BlueprintSpawnableComponent))
class UTwinBaseAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FName _statusEffectID;

	UPROPERTY(EditDefaultsOnly)
	float _customParam;

private:
	UFUNCTION()
	void Authority_OnTwinSet(AConjoinedTwin* twin);

public:
	UTwinBaseAddon();
};

FORCEINLINE uint32 GetTypeHash(const UTwinBaseAddon) { return 0; }
