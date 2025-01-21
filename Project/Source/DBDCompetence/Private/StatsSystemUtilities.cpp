#include "StatsSystemUtilities.h"
#include "TunableStat.h"
#include "UObject/ScriptInterface.h"

class IModifierProvider;

void UStatsSystemUtilities::InitStatBP(FTunableStat& theStat, TScriptInterface<IModifierProvider> modifierProvider)
{

}

float UStatsSystemUtilities::GetStatValueBP(const FTunableStat& theStat)
{
	return 0.0f;
}

UStatsSystemUtilities::UStatsSystemUtilities()
{

}
