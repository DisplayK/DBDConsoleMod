#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GameplayModifierFunctionLibrary.generated.h"

class ADBDPlayer;

UCLASS(BlueprintType)
class UGameplayModifierFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	static void Authority_SetPlayerGameplayModifier(ADBDPlayer* targetPlayer, FGameplayTag modifierType, float modifierValue);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	static void Authority_SetPlayerGameplayFlag(ADBDPlayer* targetPlayer, FGameplayTag flagType);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	static void Authority_ClearPlayerGameplayModifier(ADBDPlayer* targetPlayer, FGameplayTag modifierType);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	static void Authority_ClearPlayerGameplayFlag(ADBDPlayer* targetPlayer, FGameplayTag flagType);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	static void Authority_ClearAllPlayerGameplayModifiers(ADBDPlayer* targetPlayer);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	static void Authority_ClearAllPlayerGameplayFlags(ADBDPlayer* targetPlayer);

public:
	UGameplayModifierFunctionLibrary();
};

FORCEINLINE uint32 GetTypeHash(const UGameplayModifierFunctionLibrary) { return 0; }
