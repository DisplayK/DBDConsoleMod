#include "DBDAIUtilities.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"

class UActorComponent;
class UNavigationPath;
class UObject;
class UNavigationQueryFilter;
class AActor;

void UDBDAIUtilities::SetCanEverAffectNavigation(UActorComponent* component, bool affectNavigation)
{

}

UNavigationPath* UDBDAIUtilities::FindPathWithAgentRadiusToActorSynchronously(UObject* worldContextObject, const FVector& pathStart, AActor* goalActor, float agentRadius, float tetherDistance, AActor* pathfindingContext, TSubclassOf<UNavigationQueryFilter> filterClass)
{
	return NULL;
}

bool UDBDAIUtilities::DrawDebugAIPerception()
{
	return false;
}

bool UDBDAIUtilities::DrawDebugAINavigationFilter()
{
	return false;
}

bool UDBDAIUtilities::DrawDebugAINavigation()
{
	return false;
}

UDBDAIUtilities::UDBDAIUtilities()
{

}
