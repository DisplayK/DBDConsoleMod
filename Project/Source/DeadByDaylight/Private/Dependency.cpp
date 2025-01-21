#include "Dependency.h"

FDependency::FDependency()
{
	this->Type = ETileSpawnPointType::Unspecified;
	this->AssetReference = FSoftObjectPath{};
	this->Object = NULL;
	this->Unique = false;
	this->Count = 0;
}
