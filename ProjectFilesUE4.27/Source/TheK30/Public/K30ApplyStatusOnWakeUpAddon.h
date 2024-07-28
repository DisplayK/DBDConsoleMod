#pragma once

#include "CoreMinimal.h"
#include "K30BaseStatusEffectAddon.h"
#include "Templates/SubclassOf.h"
#include "K30ApplyStatusOnWakeUpAddon.generated.h"

class AKnightGuard;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK30ApplyStatusOnWakeUpAddon : public UK30BaseStatusEffectAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AKnightGuard> _applicableGuard;

protected:
	UFUNCTION()
	void Authority_OnWakeUp(AKnightGuard* currentGuard);

public:
	UK30ApplyStatusOnWakeUpAddon();
};

FORCEINLINE uint32 GetTypeHash(const UK30ApplyStatusOnWakeUpAddon) { return 0; }
