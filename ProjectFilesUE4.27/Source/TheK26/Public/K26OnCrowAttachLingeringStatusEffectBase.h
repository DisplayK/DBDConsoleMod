#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "DBDTunableRowHandle.h"
#include "GameplayTagContainer.h"
#include "K26OnCrowAttachLingeringStatusEffectBase.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK26OnCrowAttachLingeringStatusEffectBase : public UStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _onCrowAttachStateTag;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _lingerTime;

protected:
	UFUNCTION(BlueprintPure)
	float GetLingerTime() const;

public:
	UK26OnCrowAttachLingeringStatusEffectBase();
};

FORCEINLINE uint32 GetTypeHash(const UK26OnCrowAttachLingeringStatusEffectBase) { return 0; }
