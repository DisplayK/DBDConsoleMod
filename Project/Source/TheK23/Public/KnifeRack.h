#pragma once

#include "CoreMinimal.h"
#include "BaseLockerItem.h"
#include "KnifeRack.generated.h"

class ADBDPlayer;

UCLASS()
class AKnifeRack : public ABaseLockerItem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnReloadMontageStarted(float actionSpeedMultiplier, ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnReloadEnded(ADBDPlayer* player);

public:
	AKnifeRack();
};

FORCEINLINE uint32 GetTypeHash(const AKnifeRack) { return 0; }
