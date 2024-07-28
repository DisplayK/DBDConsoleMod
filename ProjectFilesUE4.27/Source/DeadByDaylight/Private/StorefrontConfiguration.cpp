#include "StorefrontConfiguration.h"

UStorefrontConfiguration::UStorefrontConfiguration()
{
	this->States = TMap<EStorefrontState, FStorefrontStateData>();
}
