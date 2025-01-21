#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/ScriptInterface.h"
#include "DBDConditionFactory.generated.h"

class UIsPlayerPerformingInteraction;
class UPerk;
class IConditionReceiver;
class UDoesPerkHaveToken;

UCLASS(BlueprintType)
class DBDCOMPETENCE_API UDBDConditionFactory : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static UIsPlayerPerformingInteraction* IsPlayerPerformingInteraction(TScriptInterface<IConditionReceiver> conditionReceiver, const FGameplayTagContainer& interactionSemantics);

	UFUNCTION(BlueprintCallable)
	static UDoesPerkHaveToken* DoesPerkHaveToken(TScriptInterface<IConditionReceiver> conditionReceiver, UPerk* perk);

public:
	UDBDConditionFactory();
};

FORCEINLINE uint32 GetTypeHash(const UDBDConditionFactory) { return 0; }
