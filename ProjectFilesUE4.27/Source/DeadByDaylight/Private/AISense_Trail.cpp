#include "AISense_Trail.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"

class UObject;
class AActor;

void UAISense_Trail::ReportTrailEvent(UObject* worldContextObj, FVector location, AActor* instigator, FGameplayTag ignoreOnPerkTag, float lifeTime)
{

}

UAISense_Trail::UAISense_Trail()
{
	this->Events = TArray<FAITrailEvent>();
}
