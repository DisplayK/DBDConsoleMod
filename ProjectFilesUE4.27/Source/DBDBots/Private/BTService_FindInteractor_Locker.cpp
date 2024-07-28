#include "BTService_FindInteractor_Locker.h"

UBTService_FindInteractor_Locker::UBTService_FindInteractor_Locker()
{
	this->PerksToRunInLocker = TArray<FInLockerPerk>();
	this->StatusFilter = EFindInteractableLockerStatusFilter::Empty;
}
