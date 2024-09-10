#include "BorderElements.h"

FBorderElements::FBorderElements()
{
	this->Direction = EDirection::Up;
	this->Elements = TArray<UActorSpawner*>();
}
