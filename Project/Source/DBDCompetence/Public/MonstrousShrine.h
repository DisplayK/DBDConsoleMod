#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameEventData.h"
#include "Templates/SubclassOf.h"
#include "MonstrousShrine.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UMonstrousShrine : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _fasterDrainPercentage;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _fasterDrainOnScourgeHookEffect;

private:
	UFUNCTION()
	void Authority_OnSurvivorUnhookedOnScourgeHook(const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_OnSurvivorHookedOnScourgeHook(const FGameEventData& gameEventData);

public:
	UMonstrousShrine();
};

FORCEINLINE uint32 GetTypeHash(const UMonstrousShrine) { return 0; }
