#include "BTService_FindInteractor_Totem.h"

UBTService_FindInteractor_Totem::UBTService_FindInteractor_Totem()
{
	this->CleansePerks = TArray<FAICleansePerkCondition>();
	this->SearchUsingBoundPerks = false;
	this->BoundPerkIds = TArray<FName>();
	this->OnlyWhenInjured = false;
}
