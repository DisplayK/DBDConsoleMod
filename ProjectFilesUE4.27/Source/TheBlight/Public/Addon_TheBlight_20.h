#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Addon_TheBlight_20.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_TheBlight_20 : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UStatusEffect* _forceKoStatusEffect;

public:
	UAddon_TheBlight_20();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_TheBlight_20) { return 0; }
