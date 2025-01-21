#pragma once

#include "CoreMinimal.h"
#include "PlayerStatusEffectSpawnerHelper.h"
#include "Perk.h"
#include "PerkLevelEffectArray.h"
#include "SpawningEffectPerk.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API USpawningEffectPerk : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FPerkLevelEffectArray _perkLevelEffects;

	UPROPERTY(Transient)
	FPlayerStatusEffectSpawnerHelper _effectSpawnerHelper;

public:
	USpawningEffectPerk();
};

FORCEINLINE uint32 GetTypeHash(const USpawningEffectPerk) { return 0; }
