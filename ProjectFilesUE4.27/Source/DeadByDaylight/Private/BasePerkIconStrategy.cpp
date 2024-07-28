#include "BasePerkIconStrategy.h"

class UPerk;

bool UBasePerkIconStrategy::GetIsRechargeableActive(const UPerk* perk) const
{
	return false;
}

bool UBasePerkIconStrategy::GetIsRechargeable(const UPerk* perk) const
{
	return false;
}

float UBasePerkIconStrategy::GetDisplayPercent(const UPerk* perk) const
{
	return 0.0f;
}

UBasePerkIconStrategy::UBasePerkIconStrategy()
{

}
