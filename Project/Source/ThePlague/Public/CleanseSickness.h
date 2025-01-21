#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "CleanseSickness.generated.h"

class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UCleanseSickness : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FName _statusEffectID;

private:
	UFUNCTION(BlueprintCallable)
	void OnCleanseComplete(ADBDPlayer* player);

public:
	UCleanseSickness();
};

FORCEINLINE uint32 GetTypeHash(const UCleanseSickness) { return 0; }
