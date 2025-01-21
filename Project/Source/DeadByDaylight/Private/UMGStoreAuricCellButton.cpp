#include "UMGStoreAuricCellButton.h"
#include "UObject/NoExportTypes.h"

void UUMGStoreAuricCellButton::ReportInvalidPercentage(float percentage)
{

}

bool UUMGStoreAuricCellButton::HasBonusExpired(const FDateTime endDate)
{
	return false;
}

UUMGStoreAuricCellButton::UUMGStoreAuricCellButton()
{
	this->AuricCellTitleText = NULL;
	this->Timer = NULL;
}
