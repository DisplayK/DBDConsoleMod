#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "GeneratorDamageInteraction.generated.h"

class ADBDPlayer;
class AGenerator;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UGeneratorDamageInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _baseImmediateDamagePercent;

public:
	UFUNCTION(BlueprintPure=false, BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_DamageGenerator(ADBDPlayer* damageBy, AGenerator* generator) const;

public:
	UGeneratorDamageInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UGeneratorDamageInteraction) { return 0; }
