#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "SelfCare.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API USelfCare : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _selfHealNoMedkitSpeedPenaltyEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _selfHealSpeedPenalty;

public:
	USelfCare();
};

FORCEINLINE uint32 GetTypeHash(const USelfCare) { return 0; }
