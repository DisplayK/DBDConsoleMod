#pragma once

#include "CoreMinimal.h"
#include "BoonPerk.h"
#include "Templates/SubclassOf.h"
#include "S28P02.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class US28P02 : public UBoonPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _healingSpeedGainPercentage;

	UPROPERTY(EditDefaultsOnly)
	bool _canSelfHeal;

	UPROPERTY(EditDefaultsOnly)
	float _selfHealSpeedPenalty;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _blessedEffectClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _allowSelfHealEffectClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _selfHealSpeedPenaltyEffectClass;

public:
	US28P02();
};

FORCEINLINE uint32 GetTypeHash(const US28P02) { return 0; }
