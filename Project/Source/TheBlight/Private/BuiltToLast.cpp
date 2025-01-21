#include "BuiltToLast.h"
#include "Net/UnrealNetwork.h"

void UBuiltToLast::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UBuiltToLast, _numberOfTimesPerkTriggered);
}

UBuiltToLast::UBuiltToLast()
{
	this->_refillPercentage = 0.000000;
	this->_hideDuration = 0.000000;
	this->_numberOfTimesPerkTriggered = 0;
}
