#pragma once

#include "CoreMinimal.h"
#include "EDBDScoreTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "DBDGameEventUtilities.generated.h"

class ADBDPlayer;
class UObject;
class AActor;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBDGameEventUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void RemotelyDispatchGameEvent(const UObject* worldContextObject, const FGameplayTag gameEventType, ADBDPlayer* instigator, AActor* target, float customValue, UObject* customObjectParameter, int32 customIntValue);

	UFUNCTION(BlueprintCallable)
	static void LocallyDispatchGameEvent(const UObject* worldContextObject, const FGameplayTag gameEventType, ADBDPlayer* instigator, AActor* target, float customValue, UObject* customObjectParameter, int32 customIntValue);

	UFUNCTION(BlueprintCallable)
	static void FireGameEvent(const UObject* worldContextObject, EDBDScoreTypes scoreType, float amount, AActor* instigator, AActor* target);

	UFUNCTION(BlueprintCallable)
	static void DispatcherFireGameEvent(const UObject* worldContextObject, const FGameplayTag gameEventType, bool broadcastOverNetwork, ADBDPlayer* instigator, AActor* target, float customValue, UObject* customObjectParameter, int32 customIntValue);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	static void Authority_DispatcherFireGameEvent(const UObject* worldContextObject, const FGameplayTag gameEventType, bool broadcastOverNetwork, ADBDPlayer* instigator, AActor* target, float customValue, UObject* customObjectParameter, int32 customIntValue);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	static void Authority_AccumulateOngoingGameEvent(const UObject* worldContextObject, const FGameplayTag gameEventType, ADBDPlayer* instigator, AActor* target, float customValue, float ongoingWaitTime, UObject* customObjectParameter, int32 customIntValue);

public:
	UDBDGameEventUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UDBDGameEventUtilities) { return 0; }
