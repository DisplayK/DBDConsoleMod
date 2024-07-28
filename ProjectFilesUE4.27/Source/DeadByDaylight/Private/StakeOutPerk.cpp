#include "StakeOutPerk.h"

void UStakeOutPerk::Server_ConsumeToken_Implementation()
{

}

bool UStakeOutPerk::Server_ConsumeToken_Validate()
{
	return true;
}

void UStakeOutPerk::Local_BroadcastConsumeToken()
{

}

UStakeOutPerk::UStakeOutPerk()
{
	this->MaxTokensByLevel = TArray<int32>();
	this->TokenChargeTime = 0.000000;
}
