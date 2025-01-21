#include "BlastMine.h"
#include "UObject/NoExportTypes.h"

void UBlastMine::Client_TrapActivatedLoudNotification_Implementation(FTransform location)
{

}

UBlastMine::UBlastMine()
{
	this->_blastMinePlacerClass = NULL;
	this->_blastMineFirecrackerClass = NULL;
	this->_blastMine = NULL;
}
