#include "UMGTallyPipsContainer.h"

void UUMGTallyPipsContainer::SetData(int32 rank, int32 pipsRequiredForNextRank, int32 filledPips)
{

}

UUMGTallyPipsContainer::UUMGTallyPipsContainer()
{
	this->PipsContainer = NULL;
	this->_pipsClasses = TArray<TSoftClassPtr<UUMGTallyPip>>();
	this->Pips = TArray<UUMGTallyPip*>();
}
