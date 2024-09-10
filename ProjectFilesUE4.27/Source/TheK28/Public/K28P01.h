#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "K28P01.generated.h"

class UTimerObject;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK28P01 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _perkActivationDuration;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _effectClass;

	UPROPERTY(EditDefaultsOnly)
	float _injuryTimerDuration;

	UPROPERTY(Transient, Export)
	UTimerObject* _injuryTimer;

public:
	UK28P01();
};

FORCEINLINE uint32 GetTypeHash(const UK28P01) { return 0; }
