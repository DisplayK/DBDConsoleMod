#include "OfferingProperties.h"

FOfferingProperties::FOfferingProperties()
{
	this->OfferingType = EOfferingType::None;
	this->Tags = TArray<FName>();
	this->Effects = TArray<FOfferingEffect>();
	this->BigIconFilePath = TEXT("");
}
