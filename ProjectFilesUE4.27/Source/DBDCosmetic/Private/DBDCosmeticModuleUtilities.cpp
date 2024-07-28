#include "DBDCosmeticModuleUtilities.h"
#include "Templates/SubclassOf.h"

class ASurvivorCosmeticHelperActor;
class ACamperPlayer;

TArray<ASurvivorCosmeticHelperActor*> UDBDCosmeticModuleUtilities::GetCosmeticHelperActorsOfSurvivorByClass(const ACamperPlayer* survivor, const TSubclassOf<ASurvivorCosmeticHelperActor> cosmeticHelperActorClassType)
{
	return TArray<ASurvivorCosmeticHelperActor*>();
}

TArray<ASurvivorCosmeticHelperActor*> UDBDCosmeticModuleUtilities::GetCosmeticHelperActorsOfSurvivor(const ACamperPlayer* survivor)
{
	return TArray<ASurvivorCosmeticHelperActor*>();
}

UDBDCosmeticModuleUtilities::UDBDCosmeticModuleUtilities()
{

}
