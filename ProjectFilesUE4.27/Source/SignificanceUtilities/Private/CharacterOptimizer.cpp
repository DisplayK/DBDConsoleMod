#include "CharacterOptimizer.h"
#include "Net/UnrealNetwork.h"

void UCharacterOptimizer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UCharacterOptimizer, _dependentActorsToCheckSignficance);
}

UCharacterOptimizer::UCharacterOptimizer()
{
	this->_characterMovementTickRateWhenInsignificant = 0.100000;
	this->_dependentActorsToCheckSignficance = TArray<AActor*>();
	this->_significanceStrategy = NULL;
}
