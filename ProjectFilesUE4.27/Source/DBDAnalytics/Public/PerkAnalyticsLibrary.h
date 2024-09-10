#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PerkAnalyticsLibrary.generated.h"

class ADBDPlayer;

UCLASS(BlueprintType)
class UPerkAnalyticsLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void SendTinkererUndetectableInterruptAnalytics(ADBDPlayer* interruptedPlayer, ADBDPlayer* slasher);

	UFUNCTION(BlueprintCallable)
	static void SendTinkererUndetectableHitNearGeneratorAnalytics(ADBDPlayer* hitPlayer, ADBDPlayer* slasher);

	UFUNCTION(BlueprintCallable)
	static void SendLightbornAuraRevealedAnalytics(ADBDPlayer* revealedPlayer, ADBDPlayer* slasher);

	UFUNCTION(BlueprintCallable)
	static void SendKnockoutSurvivorFoundAnalytics(ADBDPlayer* findingSurvivor, ADBDPlayer* foundSurvivor);

	UFUNCTION(BlueprintCallable)
	static void SendFranklinsHitSurvivorNearDroppedItemAnalytics(ADBDPlayer* hitSurvivor, ADBDPlayer* slasher);

	UFUNCTION(BlueprintCallable)
	static void SendFranklinsConsumeItemAnalytics(ADBDPlayer* previousOwner);

public:
	UPerkAnalyticsLibrary();
};

FORCEINLINE uint32 GetTypeHash(const UPerkAnalyticsLibrary) { return 0; }
