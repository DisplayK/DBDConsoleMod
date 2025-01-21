#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "KindredPerk.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UKindredPerk : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TArray<float> _killerAuraRevealRange;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _kindredRevealKillerOther;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _kindredRevealKillerOwner;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _kindredRevealSurvivors;

public:
	UKindredPerk();
};

FORCEINLINE uint32 GetTypeHash(const UKindredPerk) { return 0; }
