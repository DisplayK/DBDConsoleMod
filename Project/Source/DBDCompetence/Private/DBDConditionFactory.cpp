#include "DBDConditionFactory.h"
#include "UObject/ScriptInterface.h"
#include "GameplayTagContainer.h"

class UPerk;
class IConditionReceiver;
class UIsPlayerPerformingInteraction;
class UDoesPerkHaveToken;

UIsPlayerPerformingInteraction* UDBDConditionFactory::IsPlayerPerformingInteraction(TScriptInterface<IConditionReceiver> conditionReceiver, const FGameplayTagContainer& interactionSemantics)
{
	return NULL;
}

UDoesPerkHaveToken* UDBDConditionFactory::DoesPerkHaveToken(TScriptInterface<IConditionReceiver> conditionReceiver, UPerk* perk)
{
	return NULL;
}

UDBDConditionFactory::UDBDConditionFactory()
{

}
