#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S34P03.generated.h"

class AGenerator;
class ADBDPlayer;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK30_API US34P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TArray<AGenerator*> _generatorsInRange;

	UPROPERTY(Transient, Export)
	TMap<ADBDPlayer*, UStatusEffect*> _activeStatusEffects;

	UPROPERTY(EditDefaultsOnly)
	float _generatorRangeFromPlayer;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _repairSpeedModifierClass;

	UPROPERTY(EditDefaultsOnly)
	float _repairSpeedValues;

public:
	UFUNCTION(BlueprintPure)
	float GetRepairSpeedAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetGeneratorRangeFromPlayer() const;

public:
	US34P03();
};

FORCEINLINE uint32 GetTypeHash(const US34P03) { return 0; }
