#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_K27Power_16.generated.h"

class UK27Addon_16_ScreamRevealComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K27Power_16 : public UOnEventBaseAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _distanceOfSightFromSurvivorToKiller;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _survivorScreamRevealDuration;

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK27Addon_16_ScreamRevealComponent> _screamRevealComponentClass;

	UPROPERTY(Transient, Export)
	TArray<TWeakObjectPtr<UK27Addon_16_ScreamRevealComponent>> _cachedScreamRevealComponents;

public:
	UAddon_K27Power_16();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K27Power_16) { return 0; }
