#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "EImposeEffectTo.h"
#include "Templates/SubclassOf.h"
#include "ImposeStatusEffectOnEventAddon.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UImposeStatusEffectOnEventAddon : public UOnEventBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _statusEffectTime;

	UPROPERTY(EditDefaultsOnly)
	FName _statusEffectNameDeprecated;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _statusEffect;

	UPROPERTY(EditDefaultsOnly)
	EImposeEffectTo _imposeEffectTo;

public:
	UImposeStatusEffectOnEventAddon();
};

FORCEINLINE uint32 GetTypeHash(const UImposeStatusEffectOnEventAddon) { return 0; }
