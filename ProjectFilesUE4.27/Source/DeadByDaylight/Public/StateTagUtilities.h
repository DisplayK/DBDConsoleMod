#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/ScriptInterface.h"
#include "StateTagUtilities.generated.h"

class ADBDPlayer;
class IObjectStateProvider;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UStateTagUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void RemoveStateTagToPlayer(const ADBDPlayer* player, FGameplayTag tag);

	UFUNCTION(BlueprintCallable)
	static void RemoveStateTag(const TScriptInterface<IObjectStateProvider> objectStateProvider, FGameplayTag tag);

	UFUNCTION(BlueprintPure)
	static bool HasStateTag(const TScriptInterface<IObjectStateProvider> objectStateProvider, FGameplayTag tag);

	UFUNCTION(BlueprintCallable)
	static bool HasAnyStateTags(const TScriptInterface<IObjectStateProvider> objectStateProvider, const FGameplayTagContainer& tags);

	UFUNCTION(BlueprintPure)
	static bool CurrentInteractionHasStateTag(const ADBDPlayer* player, FGameplayTag tag);

	UFUNCTION(BlueprintPure)
	static bool CurrentInteractionHasAnyStateTag(const ADBDPlayer* player, const FGameplayTagContainer& tags);

	UFUNCTION(BlueprintCallable)
	static void AddStateTagToPlayer(const ADBDPlayer* player, FGameplayTag tag);

	UFUNCTION(BlueprintCallable)
	static void AddStateTag(const TScriptInterface<IObjectStateProvider> objectStateProvider, FGameplayTag tag);

public:
	UStateTagUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UStateTagUtilities) { return 0; }
