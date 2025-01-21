#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "OffTheRecord.generated.h"

class UStatusEffect;
class UActivatableEnduranceEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UOffTheRecord : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _activationDurationLevels;

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _activatableEnduranceEffectClass;

	UPROPERTY(Transient, Export)
	UActivatableEnduranceEffect* _activatableEnduranceEffect;

public:
	UOffTheRecord();
};

FORCEINLINE uint32 GetTypeHash(const UOffTheRecord) { return 0; }
