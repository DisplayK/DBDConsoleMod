#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "Saboteur.generated.h"

class UMeatHookOutlineUpdateStrategy;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class USaboteur : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _cooldownDuration;

	UPROPERTY(EditDefaultsOnly)
	float _revealHookDistance;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _scourgeHooksAuraColour;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _saboteurEffect;

	UPROPERTY(Transient, Export)
	TArray<UMeatHookOutlineUpdateStrategy*> _revealedMeatHooksOultineStrategy;

public:
	USaboteur();
};

FORCEINLINE uint32 GetTypeHash(const USaboteur) { return 0; }
