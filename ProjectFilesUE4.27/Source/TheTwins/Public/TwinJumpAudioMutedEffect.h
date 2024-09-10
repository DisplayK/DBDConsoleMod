#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "TwinJumpAudioMutedEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UTwinJumpAudioMutedEffect : public UStatusEffect
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTwinUnmuted();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTwinMuted();

public:
	UTwinJumpAudioMutedEffect();
};

FORCEINLINE uint32 GetTypeHash(const UTwinJumpAudioMutedEffect) { return 0; }
