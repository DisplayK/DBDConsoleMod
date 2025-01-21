#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "DarkCinctureAddon.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDarkCinctureAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UStatusEffect* _speedEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _speedEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _movementSpeedMultiplier;

public:
	UDarkCinctureAddon();
};

FORCEINLINE uint32 GetTypeHash(const UDarkCinctureAddon) { return 0; }
