#pragma once

#include "CoreMinimal.h"
#include "SurvivorCosmeticHelperActor.h"
#include "K30SurvivorCosmeticHelperActor.generated.h"

UCLASS()
class AK30SurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSurvivorCaptureFlagBuffActivationStateChanged(bool isFlagCaptureBuffActive);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnHuntEnd();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnHuntBegin();

public:
	AK30SurvivorCosmeticHelperActor();
};

FORCEINLINE uint32 GetTypeHash(const AK30SurvivorCosmeticHelperActor) { return 0; }
