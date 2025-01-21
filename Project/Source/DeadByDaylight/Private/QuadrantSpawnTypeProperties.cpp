#include "QuadrantSpawnTypeProperties.h"

FQuadrantSpawnTypeProperties::FQuadrantSpawnTypeProperties()
{
	this->QuadrantSpawnType = EQuadrantSpawnType::L_Shape;
	this->SectionLenghts = TArray<FSectionLenghtsProperties>();
}
