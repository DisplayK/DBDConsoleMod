#include "StateTagUtilities.h"
#include "GameplayTagContainer.h"
#include "UObject/ScriptInterface.h"

class ADBDPlayer;
class IObjectStateProvider;

void UStateTagUtilities::RemoveStateTagToPlayer(const ADBDPlayer* player, FGameplayTag tag)
{

}

void UStateTagUtilities::RemoveStateTag(const TScriptInterface<IObjectStateProvider> objectStateProvider, FGameplayTag tag)
{

}

bool UStateTagUtilities::HasStateTag(const TScriptInterface<IObjectStateProvider> objectStateProvider, FGameplayTag tag)
{
	return false;
}

bool UStateTagUtilities::HasAnyStateTags(const TScriptInterface<IObjectStateProvider> objectStateProvider, const FGameplayTagContainer& tags)
{
	return false;
}

bool UStateTagUtilities::CurrentInteractionHasStateTag(const ADBDPlayer* player, FGameplayTag tag)
{
	return false;
}

bool UStateTagUtilities::CurrentInteractionHasAnyStateTag(const ADBDPlayer* player, const FGameplayTagContainer& tags)
{
	return false;
}

void UStateTagUtilities::AddStateTagToPlayer(const ADBDPlayer* player, FGameplayTag tag)
{

}

void UStateTagUtilities::AddStateTag(const TScriptInterface<IObjectStateProvider> objectStateProvider, FGameplayTag tag)
{

}

UStateTagUtilities::UStateTagUtilities()
{

}
