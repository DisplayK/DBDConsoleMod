#include "TokenCounter.h"
#include "Net/UnrealNetwork.h"

void UTokenCounter::OnRep_TokenCount(int32 oldCount)
{

}

int32 UTokenCounter::GetTokenCount() const
{
	return 0;
}

int32 UTokenCounter::GetMaxTokenCount() const
{
	return 0;
}

void UTokenCounter::Authority_SetTokenCount(int32 value)
{

}

void UTokenCounter::Authority_SetMaxTokenCount(int32 value)
{

}

void UTokenCounter::Authority_IncrementToken()
{

}

void UTokenCounter::Authority_DecrementToken()
{

}

void UTokenCounter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UTokenCounter, _tokenCount);
	DOREPLIFETIME(UTokenCounter, _maxTokenCount);
}

UTokenCounter::UTokenCounter()
{
	this->_tokenCount = 0;
	this->_maxTokenCount = 3;
}
