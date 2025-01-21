#include "IllusionaryDoctor.h"
#include "UObject/NoExportTypes.h"
#include "DBDOutlineComponent.h"

void AIllusionaryDoctor::DeactivateIllusion()
{

}

void AIllusionaryDoctor::ActivateIllusion(const FTransform& transform)
{

}

AIllusionaryDoctor::AIllusionaryDoctor()
{
	this->_dbdOutline = CreateDefaultSubobject<UDBDOutlineComponent>(TEXT("DBDOutline"));
}
