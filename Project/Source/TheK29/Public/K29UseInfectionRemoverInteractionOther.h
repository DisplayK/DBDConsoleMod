#pragma once

#include "CoreMinimal.h"
#include "K29UseInfectionRemoverInteraction.h"
#include "Templates/SubclassOf.h"
#include "K29UseInfectionRemoverInteractionOther.generated.h"

class UStatusEffect;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK29UseInfectionRemoverInteractionOther : public UK29UseInfectionRemoverInteraction
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _crouchBlockStatusEffectClass;

private:
	UPROPERTY(Export)
	UStatusEffect* _crouchBlockStatusEffect;

public:
	UK29UseInfectionRemoverInteractionOther();
};

FORCEINLINE uint32 GetTypeHash(const UK29UseInfectionRemoverInteractionOther) { return 0; }
