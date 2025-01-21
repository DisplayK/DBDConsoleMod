#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "LoudNoiseNotifier.generated.h"

class ADBDPlayer;
class UObject;
class AActor;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API ULoudNoiseNotifier : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void FireWithTimeBudgeter(const UObject* worldContextObject, AActor* instigator, const FVector& location, bool shouldTrack, float audibleRange, ADBDPlayer* instigatingPlayer, bool isQuickAction);

	UFUNCTION(BlueprintCallable)
	static void Fire(const UObject* worldContextObject, AActor* instigator, const FVector& location, bool shouldTrack, float audibleRange, ADBDPlayer* instigatingPlayer, bool isQuickAction, bool isDeceivingNoise);

public:
	ULoudNoiseNotifier();
};

FORCEINLINE uint32 GetTypeHash(const ULoudNoiseNotifier) { return 0; }
