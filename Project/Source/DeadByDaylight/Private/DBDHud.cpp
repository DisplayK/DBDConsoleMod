#include "DBDHud.h"

class AActor;

void UDBDHud::RemoveStatusViewOnDestroy(AActor* actor)
{

}

UDBDHud::UDBDHud()
{
	this->_statusViews = TMap<FName, AStatusView*>();
}
