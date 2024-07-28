#include "MatchConfigTabsDataAsset.h"

UMatchConfigTabsDataAsset::UMatchConfigTabsDataAsset()
{
	this->Data = TMap<ECustomMatchTab, FMatchConfigTabData>();
}
